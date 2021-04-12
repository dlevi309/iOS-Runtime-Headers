/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/SFProximityEstimator.h>

@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator {

	char* _channelNumberArray;
	char* _rssiArray;
	unsigned _rssiCount;
	unsigned _rssiIndex;
	unsigned _rssiMinCount;

}
-(void)dealloc;
-(id)description;
-(id)initWithProximityInfo:(id)arg1 ;
-(int)_estimateRSSIForSFBLEDevice:(id)arg1 ;
@end

