/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@interface WFUserInteractionResource : WFResource <WFApplicationStateObserver>
+(BOOL)isSingleton;
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)refreshAvailability;
@end

