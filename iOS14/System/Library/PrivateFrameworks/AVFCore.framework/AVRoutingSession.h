/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVRoutingSessionInternal, AVRoutingSessionDestination;

@interface AVRoutingSession : NSObject {

	AVRoutingSessionInternal* _ivars;

}

@property (readonly) AVRoutingSessionDestination * destination; 
@property (readonly) BOOL establishedAutomaticallyFromLikelyDestination; 
-(id)init;
-(id)initWithFigRoutingSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(BOOL)establishedAutomaticallyFromLikelyDestination;
-(id)description;
-(AVRoutingSessionDestination *)destination;
-(void)dealloc;
@end

