/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITapRecognizerDelegate <NSObject>
@optional
-(void)resetTapCountForTapRecognizer:(id)arg1;

@required
-(void)tapRecognizerRecognizedTap:(id)arg1;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
-(double)_touchSloppinessFactor;

@end

