/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol MLTaskStateTransitionDelegate <NSObject>
@required
-(void)onCancellation;
-(void)onResumptionWithTaskContext:(id)arg1;
-(void)onSuspensionWithTaskContext:(id)arg1;
-(void)onCompletionWithTaskContext:(id)arg1;
-(void)onFailureWithTaskContext:(id)arg1;

@end

