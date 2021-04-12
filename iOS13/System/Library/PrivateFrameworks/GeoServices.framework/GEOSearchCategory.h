/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)mapsURL;
-(id)initWithStorage:(id)arg1 ;
-(int)displayMode;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(NSString *)displayString;
-(int)sortOrder;
-(id)_suggestionEntryMetadata;
-(id)initWithBrowseCategory:(id)arg1 ;
-(id)initWithAutocompleteEntry:(id)arg1 ;
-(void)sendFeedback;
-(id)_autocompleteEntry;
-(id<GEOVenueIdentifier>)venueIdentifier;
-(id)serverMetadata;
-(NSString *)shortDisplayString;
-(int)subCategoryType;
-(BOOL)isSubCategorySameAsTopLevel;
-(NSString *)popularTokenString;
-(id)_browseCategory;
-(NSArray *)subcategories;
@end

