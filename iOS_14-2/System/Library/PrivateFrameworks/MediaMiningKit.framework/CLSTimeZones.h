/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSArray;

@interface CLSTimeZones : NSObject {

	NSArray* _timeZonesDB;

}

@property (nonatomic,retain) NSArray * timeZonesDB;              //@synthesize timeZonesDB=_timeZonesDB - In the implementation block
+(id)sharedInstance;
-(void)invalidateCaches;
-(id)timeZoneWithLocation:(id)arg1 ;
-(id)timeZoneWithLocation:(id)arg1 countryCode:(id)arg2 ;
-(NSArray *)timeZonesDB;
-(id)_importDataBaseFromFile:(id)arg1 ;
-(id)closestZoneInfoWithLocation:(id)arg1 source:(id)arg2 ;
-(id)filteredTimeZonesWithCountyCode:(id)arg1 ;
-(id)timeZoneWithDictionary:(id)arg1 ;
-(void)setTimeZonesDB:(NSArray *)arg1 ;
@end

