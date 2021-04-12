/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEODirectionsFeedback, GEODirectionsFeedbackLogMessage, NSMutableArray;

@interface GEODirectionsFeedbackCollector : NSObject {

	GEODirectionsFeedback* _currentDirectionsFeedback;
	GEODirectionsFeedbackLogMessage* _currentFeedbackLogMessage;
	double _currentDirectionsModeStartTime;
	NSMutableArray* _navigationModes;
	double _originalExpectedTime;
	BOOL _hasEnteredPreArrivalMode;

}

@property (nonatomic,retain) GEODirectionsFeedbackLogMessage * currentFeedbackLogMessage;              //@synthesize currentFeedbackLogMessage=_currentFeedbackLogMessage - In the implementation block
@property (nonatomic,retain) GEODirectionsFeedback * currentDirectionsFeedback;                        //@synthesize currentDirectionsFeedback=_currentDirectionsFeedback - In the implementation block
-(void)dealloc;
-(id)description;
-(void)reset;
-(void)setCurrentDirectionsFeedback:(GEODirectionsFeedback *)arg1 ;
-(GEODirectionsFeedbackLogMessage *)currentFeedbackLogMessage;
-(void)setCurrentFeedbackLogMessage:(GEODirectionsFeedbackLogMessage *)arg1 ;
-(void)_updateFeedbackSessionWithResponseID:(id)arg1 ;
-(GEODirectionsFeedback *)currentDirectionsFeedback;
-(void)addStepFeedback:(id)arg1 ;
-(void)addTrafficRerouteFeedback:(id)arg1 ;
-(void)addAlightNotificationFeedback:(id)arg1 ;
-(void)startFeedbackSessionForResponseID:(id)arg1 withNavigationType:(int)arg2 ;
-(void)setupFeedbackSessionWithResponseID:(id)arg1 ;
-(void)setOriginalExpectedTime:(double)arg1 ;
-(void)addGuidanceEventFeedback:(id)arg1 ;
-(void)addRouteID:(id)arg1 routeIndex:(unsigned)arg2 stepID:(unsigned)arg3 completeStep:(BOOL)arg4 ;
-(void)setFinalLocation:(id)arg1 asArrival:(BOOL)arg2 ;
-(void)setHasEnteredPreArrivalMode:(BOOL)arg1 ;
-(void)setAudioFeedback:(GEONavigationAudioFeedback*)arg1 ;
-(void)setModalities:(id)arg1 ;
-(void)changeNavigationType:(int)arg1 ;
-(void)endFeedbackSessionWithTracePath:(id)arg1 ;
@end

