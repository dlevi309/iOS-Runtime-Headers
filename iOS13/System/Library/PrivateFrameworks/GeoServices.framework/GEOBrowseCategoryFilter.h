/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOSearchFilter.h>
#import <libobjc.A.dylib/GEOAutocompleteFilter.h>

@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {

	GEOSearchCategory* _category;

}
-(id)init;
-(BOOL)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyToAutocompleteParameters:(id)arg1 error:(id*)arg2 ;
-(id)initWithCategory:(id)arg1 ;
@end

