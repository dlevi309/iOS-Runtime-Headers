/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class NSSet, NSDictionary;

@interface WFRemoteExecutionIncomingAlertSession : WFRemoteExecutionSession {

	NSSet* _lastKnownDestinations;
	NSDictionary* _lastKnownOptions;

}

@property (nonatomic,retain) NSSet * lastKnownDestinations;                //@synthesize lastKnownDestinations=_lastKnownDestinations - In the implementation block
@property (nonatomic,retain) NSDictionary * lastKnownOptions;              //@synthesize lastKnownOptions=_lastKnownOptions - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(void)handleTimeout;
-(double)timeoutLimitInSeconds;
-(NSSet *)lastKnownDestinations;
-(void)setLastKnownDestinations:(NSSet *)arg1 ;
-(NSDictionary *)lastKnownOptions;
-(void)setLastKnownOptions:(NSDictionary *)arg1 ;
-(void)handleIncomingProtobuf:(id)arg1 currentlyActiveSessions:(id)arg2 responseDestinations:(id)arg3 options:(id)arg4 ;
-(void)sendSelectedButton:(id)arg1 forAlertWithIdentifier:(id)arg2 error:(id)arg3 destinations:(id)arg4 options:(id)arg5 ;
@end

