/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOPDBrowseCategory, GEOPDAutocompleteEntry, NSArray, NSData, NSString, GEOFeatureStyleAttributes, NSURL;

@interface GEOSearchCategory : NSObject <NSSecureCoding> {

	GEOPDBrowseCategory* _browseCategory;
	GEOPDAutocompleteEntry* _autocompleteEntry;
	NSArray* _subcategories;

}

@property (getter=_suggestionEntryMetadata,nonatomic,readonly) NSData * suggestionEntryMetadata; 
@property (getter=_autocompleteEntry,nonatomic,readonly) GEOPDAutocompleteEntry * autocompleteEntry;              //@synthesize autocompleteEntry=_autocompleteEntry - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSString * shortDisplayString; 
@property (nonatomic,readonly) NSString * popularTokenString; 
@property (nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) NSArray * subcategories;                                                           //@synthesize subcategories=_subcategories - In the implementation block
@property (nonatomic,readonly) id<GEOVenueIdentifier> venueIdentifier; 
@property (nonatomic,readonly) int displayMode; 
@property (nonatomic,readonly) int sortOrder; 
@property (nonatomic,readonly) int subCategoryType; 
@property (getter=isSubCategorySameAsTopLevel,nonatomic,readonly) BOOL subCategorySameAsTopLevel; 
@property (nonatomic,readonly) NSURL * mapsURL; 
+(BOOL)supportsSecureCoding;
+(id)categoryForURL:(id)arg1 ;
+(void)sendFeedbackForVisibleCategories:(id)arg1 ;
-(int)sortOrder;
-(id)initWithStorage:(id)arg1 ;
-(NSString *)displayString;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(NSURL *)mapsURL;
-(void)encodeWithCoder:(id)arg1 ;
-(int)displayMode;
-(id<GEOVenueIdentifier>)venueIdentifier;
-(id)_browseCategory;
-(NSString *)popularTokenString;
-(NSArray *)subcategories;
-(id)initWithBrowseCategory:(id)arg1 ;
-(void)sendFeedback;
-(id)initWithAutocompleteEntry:(id)arg1 ;
-(id)serverMetadata;
-(id)_suggestionEntryMetadata;
-(id)initWithCoder:(id)arg1 ;
-(id)_autocompleteEntry;
-(NSString *)shortDisplayString;
-(int)subCategoryType;
-(BOOL)isSubCategorySameAsTopLevel;
@end

