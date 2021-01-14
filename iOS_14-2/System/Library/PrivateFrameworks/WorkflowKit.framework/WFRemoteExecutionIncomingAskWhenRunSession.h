/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class NSSet, NSDictionary;

@interface WFRemoteExecutionIncomingAskWhenRunSession : WFRemoteExecutionSession {

	NSSet* _lastKnownDestinations;
	NSDictionary* _lastKnownOptions;

}

@property (nonatomic,retain) NSSet * lastKnownDestinations;                //@synthesize lastKnownDestinations=_lastKnownDestinations - In the implementation block
@property (nonatomic,retain) NSDictionary * lastKnownOptions;              //@synthesize lastKnownOptions=_lastKnownOptions - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(void)handleTimeout;
-(NSSet *)lastKnownDestinations;
-(void)setLastKnownDestinations:(NSSet *)arg1 ;
-(NSDictionary *)lastKnownOptions;
-(void)setLastKnownOptions:(NSDictionary *)arg1 ;
-(void)handleIncomingProtobuf:(id)arg1 currentlyActiveSessions:(id)arg2 responseDestinations:(id)arg3 responseOptions:(id)arg4 ;
-(void)sendResponse:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(id)missingParameterError;
@end

