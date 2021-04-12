/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPMockRTMapItem, NSArray;

@interface PPMockRTLocationOfInterest : NSObject {

	PPMockRTMapItem* _mapItem;
	long long _type;
	NSArray* _visits;

}

@property (nonatomic,retain) PPMockRTMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * visits;                       //@synthesize visits=_visits - In the implementation block
+(id)mockLocationOfInterestWithSubThoroughfare:(id)arg1 thoroughfare:(id)arg2 subLocality:(id)arg3 locality:(id)arg4 administrativeArea:(id)arg5 administrativeAreaCode:(id)arg6 postalCode:(id)arg7 country:(id)arg8 countryCode:(id)arg9 longitude:(double)arg10 latitude:(double)arg11 visits:(id)arg12 ;
-(PPMockRTMapItem *)mapItem;
-(void)setMapItem:(PPMockRTMapItem *)arg1 ;
-(long long)type;
-(NSArray *)visits;
-(void)setVisits:(NSArray *)arg1 ;
@end

