/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSArray, NSString, NSDictionary;

@interface PRSRankingItemCollection : NSObject {

	NSArray* _arrayOfRankingItems;
	unsigned long long _countOfVisibleResults;
	NSString* _bundleIdentifier;
	NSDictionary* _mapResultIdToProtectionClass;

}

@property (retain) NSArray * arrayOfRankingItems;                            //@synthesize arrayOfRankingItems=_arrayOfRankingItems - In the implementation block
@property (assign) unsigned long long countOfVisibleResults;                 //@synthesize countOfVisibleResults=_countOfVisibleResults - In the implementation block
@property (retain) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) NSDictionary * mapResultIdToProtectionClass;              //@synthesize mapResultIdToProtectionClass=_mapResultIdToProtectionClass - In the implementation block
-(NSString *)bundleIdentifier;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)countOfVisibleResults;
-(NSArray *)arrayOfRankingItems;
-(void)setArrayOfRankingItems:(NSArray *)arg1 ;
-(void)setCountOfVisibleResults:(unsigned long long)arg1 ;
-(NSDictionary *)mapResultIdToProtectionClass;
-(void)setMapResultIdToProtectionClass:(NSDictionary *)arg1 ;
@end

