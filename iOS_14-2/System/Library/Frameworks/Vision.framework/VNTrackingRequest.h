/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(unsigned)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(id)sequencedRequestPreviousObservationsKey;
-(unsigned long long)trackingLevel;
-(id)_trackingLevelOptionFromTrackingLevelEnum;
-(void)setTrackingLevel:(unsigned long long)arg1 ;
-(id)initWithDetectedObjectObservation:(id)arg1 ;
-(id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newDefaultRequestInstance;
-(void)setInputObservation:(VNDetectedObjectObservation *)arg1 ;
-(BOOL)isLastFrame;
-(VNDetectedObjectObservation *)inputObservation;
-(void)populateDetectorProcessingOptions:(id)arg1 session:(id)arg2 ;
-(id)_resetTrackerIfNeeded:(id)arg1 trackerProvider:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)setLastFrame:(BOOL)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
@end

