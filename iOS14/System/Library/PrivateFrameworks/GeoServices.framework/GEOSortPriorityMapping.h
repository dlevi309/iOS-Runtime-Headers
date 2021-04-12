/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSArray;

@interface GEOSortPriorityMapping : NSObject {

	NSArray* _entries;

}

@property (nonatomic,readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
+(long long)resultTypeForACResultType:(int)arg1 ;
+(long long)resultSubtypeForACResultSubtype:(int)arg1 ;
+(id)sortPriorityMappingFromDefaultsValue:(id)arg1 ;
-(id)initWithEntries:(id)arg1 ;
-(id)init;
-(NSArray *)entries;
-(id)initWithAutocompleteResultSortPriorityMapping:(id)arg1 ;
@end

