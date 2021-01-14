/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFGetTravelTimeAction : WFAction
+(unsigned long long)transportTypeFromString:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(void)getMapItemFromCollection:(id)arg1 parameterKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

