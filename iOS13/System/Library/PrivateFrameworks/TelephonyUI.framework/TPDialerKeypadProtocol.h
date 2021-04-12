/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/


@protocol TPDialerKeypadProtocol <NSObject>
@optional
-(void)performTapActionDownForHighlightedKey;
-(void)performTapActionEndForHighlightedKey;
-(void)performTapActionCancelForHighlightedKey;
-(void)replaceButton:(id)arg1 atIndex:(unsigned long long)arg2;

@required
-(void)setDelegate:(id)arg1;
-(void)setPlaysSounds:(BOOL)arg1;
-(void)highlightKeyAtIndex:(long long)arg1;
-(long long)indexForHighlightedKey;

@end

