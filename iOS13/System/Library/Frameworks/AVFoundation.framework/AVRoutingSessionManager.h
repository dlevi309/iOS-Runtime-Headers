/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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
-(void)dealloc;
-(id)description;
-(id)initWithFigRoutingSessionManager:(OpaqueFigRoutingSessionManagerRef)arg1 ;
-(AVRoutingSession *)currentRoutingSession;
-(NSArray *)likelyExternalDestinations;
-(NSArray *)allLikelyDestinations;
-(BOOL)prefersLikelyDestinationsOverCurrentRoutingSession;
-(void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)startRoutingSessionWithOutputDeviceDescriptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:(id*)arg1 ;
-(BOOL)stopSuppressingLikelyDestinationsAndReturnError:(id*)arg1 ;
@end

