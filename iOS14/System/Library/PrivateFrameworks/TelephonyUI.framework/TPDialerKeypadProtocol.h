/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)indexForHighlightedKey;
-(void)highlightKeyAtIndex:(long long)arg1;

@end

