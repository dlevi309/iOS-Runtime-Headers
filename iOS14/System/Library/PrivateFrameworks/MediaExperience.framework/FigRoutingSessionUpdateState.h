/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(OpaqueFigRoutingSessionRef)newSession;
-(id)initWithNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(void)setNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(ARPPredictionContext *)predictionContext;
-(void)setPredictionContext:(ARPPredictionContext *)arg1 ;
-(void)dealloc;
@end

