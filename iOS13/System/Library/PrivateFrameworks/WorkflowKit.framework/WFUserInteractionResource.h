/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

