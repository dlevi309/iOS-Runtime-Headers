/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned short processedLocation;                      //@synthesize processedLocation=_processedLocation - In the implementation block
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSString * processedLocationTypeString; 
@property (nonatomic,readonly) double approximateLatitude;                          //@synthesize approximateLatitude=_approximateLatitude - In the implementation block
@property (nonatomic,readonly) double approximateLongitude;                         //@synthesize approximateLongitude=_approximateLongitude - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) int timeZoneOffset;                                  //@synthesize timeZoneOffset=_timeZoneOffset - In the implementation block
@property (nonatomic,readonly) NSDate * representativeDate;                         //@synthesize representativeDate=_representativeDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                           //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) float aggregationScore;                              //@synthesize aggregationScore=_aggregationScore - In the implementation block
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchMomentUUIDByAssetUUIDForAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2 ;
+(id)_fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg1 photoLibrary:(id)arg2 ;
-(id)description;
-(NSDate *)modificationDate;
-(NSString *)subtitle;
-(id)localizedTitle;
-(id)localizedSubtitle;
-(BOOL)hasLocationInfo;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(BOOL)canShowAvalancheStacks;
-(id)localizedLocationNames;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(unsigned short)processedLocation;
-(int)timeZoneOffset;
-(NSDate *)representativeDate;
-(void)setProcessedLocation:(unsigned short)arg1 ;
-(double)approximateLatitude;
-(double)approximateLongitude;
-(float)aggregationScore;
-(BOOL)collectionHasFixedOrder;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(NSString *)processedLocationTypeString;
-(void)_cacheLocationWithCoordinate:(CLLocationCoordinate2D)arg1 ;
@end

