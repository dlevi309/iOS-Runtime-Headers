/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHAssetCollection.h>

@class NSDate, NSString;

@interface PHMoment : PHAssetCollection {

	unsigned short _processedLocation;
	int _timeZoneOffset;
	float _aggregationScore;
	NSDate* _representativeDate;
	NSDate* _modificationDate;
	NSString* _subtitle;
	double _approximateLatitude;
	double _approximateLongitude;
	double _gpsHorizontalAccuracy;

}

@property (nonatomic,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned short processedLocation;                      //@synthesize processedLocation=_processedLocation - In the implementation block
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSString * processedLocationTypeString; 
@property (nonatomic,readonly) double approximateLatitude;                          //@synthesize approximateLatitude=_approximateLatitude - In the implementation block
@property (nonatomic,readonly) double approximateLongitude;                         //@synthesize approximateLongitude=_approximateLongitude - In the implementation block
@property (nonatomic,readonly) double gpsHorizontalAccuracy;                        //@synthesize gpsHorizontalAccuracy=_gpsHorizontalAccuracy - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) int timeZoneOffset;                                  //@synthesize timeZoneOffset=_timeZoneOffset - In the implementation block
@property (nonatomic,readonly) NSDate * representativeDate;                         //@synthesize representativeDate=_representativeDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                           //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) float aggregationScore;                              //@synthesize aggregationScore=_aggregationScore - In the implementation block
+(id)entityKeyMap;
+(id)_fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg1 photoLibrary:(id)arg2 ;
+(id)identifierCode;
+(id)fetchType;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)fetchMomentUUIDByAssetUUIDForAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
-(NSDate *)modificationDate;
-(NSDate *)universalEndDate;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(id)localizedTitle;
-(NSDate *)localStartDate;
-(BOOL)collectionHasFixedOrder;
-(float)aggregationScore;
-(NSDate *)localEndDate;
-(NSDate *)universalStartDate;
-(NSString *)subtitle;
-(NSDate *)representativeDate;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(id)localizedLocationNames;
-(Class)changeRequestClass;
-(id)localizedSubtitle;
-(double)approximateLongitude;
-(NSString *)processedLocationTypeString;
-(unsigned short)processedLocation;
-(id)description;
-(double)approximateLatitude;
-(BOOL)canShowAvalancheStacks;
-(double)gpsHorizontalAccuracy;
-(int)timeZoneOffset;
-(BOOL)hasLocationInfo;
-(void)_cacheLocationWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setProcessedLocation:(unsigned short)arg1 ;
@end

