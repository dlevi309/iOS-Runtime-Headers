/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithProximityInfo:(id)arg1 ;
-(id)descriptionParams;
-(int)_estimateRSSIForSFBLEDevice:(id)arg1 ;
-(unsigned)updateWithSFBLEDevice:(id)arg1 ;
-(int)estimatedRSSI;
@end

