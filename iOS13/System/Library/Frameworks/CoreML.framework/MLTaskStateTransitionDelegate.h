/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol MLTaskStateTransitionDelegate <NSObject>
@required
-(void)onResumptionWithTaskContext:(id)arg1;
-(void)onSuspensionWithTaskContext:(id)arg1;
-(void)onCancellation;
-(void)onCompletionWithTaskContext:(id)arg1;
-(void)onFailureWithTaskContext:(id)arg1;

@end

