/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPMockRTMapItem;

@interface PPMockRTLocationOfInterest : NSObject {

	PPMockRTMapItem* _mapItem;
	long long _type;

}

@property (nonatomic,retain) PPMockRTMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
+(id)mockLocationOfInterestWithSubThoroughfare:(id)arg1 thoroughfare:(id)arg2 subLocality:(id)arg3 locality:(id)arg4 administrativeArea:(id)arg5 administrativeAreaCode:(id)arg6 postalCode:(id)arg7 country:(id)arg8 countryCode:(id)arg9 longitude:(double)arg10 latitude:(double)arg11 ;
-(long long)type;
-(void)setMapItem:(PPMockRTMapItem *)arg1 ;
-(PPMockRTMapItem *)mapItem;
@end

