/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@interface SFProximityEstimator : NSObject {

	int _rssiEnter;
	int _rssiExit;
	int _rssiImmediate;
	int _rssiNear;
	int _rssiFar;
	int _estimatedRSSI;

}

@property (nonatomic,readonly) int estimatedRSSI;              //@synthesize estimatedRSSI=_estimatedRSSI - In the implementation block
+(id)proximityEstimatorWithProximityInfo:(id)arg1 ;
-(id)initWithProximityInfo:(id)arg1 ;
-(int)estimatedRSSI;
-(id)descriptionParams;
-(unsigned)updateWithSFBLEDevice:(id)arg1 ;
-(id)description;
-(int)_estimateRSSIForSFBLEDevice:(id)arg1 ;
@end

