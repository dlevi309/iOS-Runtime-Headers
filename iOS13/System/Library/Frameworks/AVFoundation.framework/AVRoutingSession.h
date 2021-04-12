/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVRoutingSessionInternal, AVRoutingSessionDestination;

@interface AVRoutingSession : NSObject {

	AVRoutingSessionInternal* _ivars;

}

@property (readonly) AVRoutingSessionDestination * destination; 
@property (readonly) BOOL establishedAutomaticallyFromLikelyDestination; 
-(id)init;
-(void)dealloc;
-(id)description;
-(AVRoutingSessionDestination *)destination;
-(id)initWithFigRoutingSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(BOOL)establishedAutomaticallyFromLikelyDestination;
@end

