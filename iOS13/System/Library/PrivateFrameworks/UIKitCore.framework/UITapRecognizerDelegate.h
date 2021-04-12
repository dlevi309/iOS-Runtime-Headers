/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITapRecognizerDelegate <NSObject>
@optional
-(void)resetTapCountForTapRecognizer:(id)arg1;

@required
-(double)_touchSloppinessFactor;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
-(void)tapRecognizerRecognizedTap:(id)arg1;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1;

@end

