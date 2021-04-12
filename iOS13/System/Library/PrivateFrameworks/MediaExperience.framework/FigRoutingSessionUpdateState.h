/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/


#import <MediaExperience/MediaExperience-Structs.h>
@class ARPPredictionContext;

@interface FigRoutingSessionUpdateState : NSObject {

	OpaqueFigRoutingSessionRef _newSession;
	ARPPredictionContext* _predictionContext;

}

@property (nonatomic,retain) OpaqueFigRoutingSessionRef newSession;                 //@synthesize newSession=_newSession - In the implementation block
@property (nonatomic,retain) ARPPredictionContext * predictionContext;              //@synthesize predictionContext=_predictionContext - In the implementation block
-(void)dealloc;
-(id)initWithNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(OpaqueFigRoutingSessionRef)newSession;
-(void)setNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(ARPPredictionContext *)predictionContext;
-(void)setPredictionContext:(ARPPredictionContext *)arg1 ;
@end

