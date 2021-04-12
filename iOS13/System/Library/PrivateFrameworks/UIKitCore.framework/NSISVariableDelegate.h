/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol NSISVariableDelegate <NSObject>
@optional
-(int)nsis_orientationHintForVariable:(id)arg1;

@required
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
-(id)nsis_descriptionOfVariable:(id)arg1;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;

@end

