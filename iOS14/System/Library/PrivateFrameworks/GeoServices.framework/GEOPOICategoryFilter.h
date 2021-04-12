/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOSearchFilter.h>
#import <libobjc.A.dylib/GEOAutocompleteFilter.h>

@class NSArray;

@interface GEOPOICategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {

	NSArray* _categoriesToInclude;
	NSArray* _categoriesToExclude;

}

@property (nonatomic,readonly) NSArray * categoriesToInclude;              //@synthesize categoriesToInclude=_categoriesToInclude - In the implementation block
@property (nonatomic,readonly) NSArray * categoriesToExclude;              //@synthesize categoriesToExclude=_categoriesToExclude - In the implementation block
+(id)filterIncludingAllCategories;
+(id)filterExcludingAllCategories;
-(id)initWithCategoriesToInclude:(id)arg1 categoriesToExclude:(id)arg2 ;
-(BOOL)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyToAutocompleteParameters:(id)arg1 error:(id*)arg2 ;
-(NSArray *)categoriesToInclude;
-(void)applyFilterToPlaceParameters:(id)arg1 ;
-(BOOL)shouldDisplayPOIWithType:(int)arg1 ;
-(NSArray *)categoriesToExclude;
@end

