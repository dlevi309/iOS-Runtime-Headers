/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)countOfVisibleResults;
-(NSArray *)arrayOfRankingItems;
-(void)setArrayOfRankingItems:(NSArray *)arg1 ;
-(void)setCountOfVisibleResults:(unsigned long long)arg1 ;
-(NSDictionary *)mapResultIdToProtectionClass;
-(void)setMapResultIdToProtectionClass:(NSDictionary *)arg1 ;
@end

