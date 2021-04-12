/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/


@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject {

	SPAdvertisementCache* _advertisementCache;

}

@property (nonatomic,retain) SPAdvertisementCache * advertisementCache;              //@synthesize advertisementCache=_advertisementCache - In the implementation block
-(SPAdvertisementCache *)advertisementCache;
-(void)setAdvertisementCache:(SPAdvertisementCache *)arg1 ;
-(id)beaconPayloadCache;
-(id)stateManager;
-(id)finderStateManager;
@end

