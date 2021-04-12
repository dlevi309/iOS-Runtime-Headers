/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequest.h>

@class VNDetectedObjectObservation;

@interface VNTrackingRequest : VNImageBasedRequest {

	VNDetectedObjectObservation* _inputObservation;
	unsigned long long _trackingLevel;
	BOOL _lastFrame;

}

@property (nonatomic,retain) VNDetectedObjectObservation * inputObservation;              //@synthesize inputObservation=_inputObservation - In the implementation block
@property (assign,nonatomic) unsigned long long trackingLevel;                            //@synthesize trackingLevel=_trackingLevel - In the implementation block
@property (assign,getter=isLastFrame,nonatomic) BOOL lastFrame;                           //@synthesize lastFrame=_lastFrame - In the implementation block
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(unsigned)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1 ;
+(id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 ;
-(id)_trackingLevelOptionFromTrackingLevelEnum;
-(void)setTrackingLevel:(unsigned long long)arg1 ;
-(id)initWithDetectedObjectObservation:(id)arg1 ;
-(id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newDefaultRequestInstance;
-(void)setInputObservation:(VNDetectedObjectObservation *)arg1 ;
-(VNDetectedObjectObservation *)inputObservation;
-(id)_resetTrackerIfNeeded:(id)arg1 trackerProvider:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)trackingLevel;
-(BOOL)isLastFrame;
-(void)setLastFrame:(BOOL)arg1 ;
@end

