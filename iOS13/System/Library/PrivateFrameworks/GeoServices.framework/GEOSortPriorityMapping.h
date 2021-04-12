/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSArray *)entries;
-(id)initWithAutocompleteResultSortPriorityMapping:(id)arg1 ;
-(id)initWithEntries:(id)arg1 ;
@end

