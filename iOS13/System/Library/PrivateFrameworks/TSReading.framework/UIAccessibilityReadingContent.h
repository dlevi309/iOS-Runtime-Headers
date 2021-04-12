/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol UIAccessibilityReadingContent
@optional
-(id)accessibilityAttributedContentForLineNumber:(long long)arg1;
-(id)accessibilityAttributedPageContent;

@required
-(long long)accessibilityLineNumberForPoint:(CGPoint)arg1;
-(CGRect*)accessibilityFrameForLineNumber:(long long)arg1;
-(id)accessibilityContentForLineNumber:(long long)arg1;
-(id)accessibilityPageContent;

@end

