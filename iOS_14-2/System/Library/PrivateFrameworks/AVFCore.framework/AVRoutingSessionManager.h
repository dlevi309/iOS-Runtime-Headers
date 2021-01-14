/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVRoutingSessionManagerInternal, AVRoutingSession, NSArray;

@interface AVRoutingSessionManager : NSObject {

	AVRoutingSessionManagerInternal* _ivars;

}

@property (readonly) AVRoutingSession * currentRoutingSession; 
@property (readonly) NSArray * likelyExternalDestinations; 
@property (readonly) NSArray * allLikelyDestinations; 
@property (readonly) BOOL prefersLikelyDestinationsOverCurrentRoutingSession; 
+(void)initialize;
+(id)longFormVideoRoutingSessionManager;
-(id)init;
-(BOOL)stopSuppressingLikelyDestinationsAndReturnError:(id*)arg1 ;
-(void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFigRoutingSessionManager:(OpaqueFigRoutingSessionManagerRef)arg1 ;
-(id)description;
-(AVRoutingSession *)currentRoutingSession;
-(NSArray *)likelyExternalDestinations;
-(BOOL)prefersLikelyDestinationsOverCurrentRoutingSession;
-(NSArray *)allLikelyDestinations;
-(BOOL)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:(id*)arg1 ;
-(BOOL)startRoutingSessionWithOutputDeviceDescriptions:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

