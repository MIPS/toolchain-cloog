for (int c0 = 1; c0 <= M; c0 += 1) {
  for (int c1 = 1; c1 <= min(c0 + 1, M); c1 += 1)
    S1(c0, c1);
  if (c0 + 1 >= M) {
    S2(c0, c0 + 2);
  } else {
    S1(c0, c0 + 2);
    S2(c0, c0 + 2);
  }
  for (int c1 = c0 + 3; c1 <= M; c1 += 1)
    S1(c0, c1);
}
