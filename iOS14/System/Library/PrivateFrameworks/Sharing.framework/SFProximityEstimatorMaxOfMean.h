/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithProximityInfo:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(int)_estimateRSSIForSFBLEDevice:(id)arg1 ;
@end

