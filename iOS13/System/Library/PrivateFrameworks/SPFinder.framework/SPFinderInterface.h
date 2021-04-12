/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/


@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject {

	SPAdvertisementCache* _advertisementCache;

}

@property (nonatomic,retain) SPAdvertisementCache * advertisementCache;              //@synthesize advertisementCache=_advertisementCache - In the implementation block
-(id)stateManager;
-(SPAdvertisementCache *)advertisementCache;
-(id)beaconPayloadCache;
-(id)finderStateManager;
-(void)setAdvertisementCache:(SPAdvertisementCache *)arg1 ;
@end

