/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFSwitchParameter.h>
#import <libobjc.A.dylib/ICAppInstallStatusObserver.h>

@interface WFTumblrComposeInAppParameter : WFSwitchParameter <ICAppInstallStatusObserver>
-(BOOL)isHidden;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2 ;
@end

