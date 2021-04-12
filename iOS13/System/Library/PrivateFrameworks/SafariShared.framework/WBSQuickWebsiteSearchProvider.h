/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSQuickWebsiteSearchProviderDelegate;
@class NSString, NSDate, WBSOpenSearchURLTemplate, WBSOpenSearchDescription;

@interface WBSQuickWebsiteSearchProvider : NSObject {

	id<WBSQuickWebsiteSearchProviderDelegate> _delegate;
	NSString* _displayName;
	NSString* _hostname;
	NSString* _sourcePageURLString;
	NSDate* _dateAdded;
	WBSOpenSearchURLTemplate* _searchURLTemplateFromForm;
	NSString* _openSearchDescriptionURLString;
	NSDate* _dateOfLastSearch;

}

@property (nonatomic,readonly) NSString * sourcePageURLString;                                          //@synthesize sourcePageURLString=_sourcePageURLString - In the implementation block
@property (nonatomic,readonly) NSDate * dateAdded;                                                      //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,retain) WBSOpenSearchURLTemplate * searchURLTemplateFromForm;                      //@synthesize searchURLTemplateFromForm=_searchURLTemplateFromForm - In the implementation block
@property (nonatomic,copy) NSString * openSearchDescriptionURLString;                                   //@synthesize openSearchDescriptionURLString=_openSearchDescriptionURLString - In the implementation block
@property (nonatomic,copy) NSDate * dateOfLastSearch;                                                   //@synthesize dateOfLastSearch=_dateOfLastSearch - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchDescription * openSearchDescription; 
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * searchURLTemplate; 
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * urlTemplateForSuggestionsInJSON; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * hostname; 
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)hostname;
-(NSDate *)dateAdded;
-(WBSOpenSearchURLTemplate *)searchURLTemplate;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInJSON;
-(NSString *)openSearchDescriptionURLString;
-(NSDate *)dateOfLastSearch;
-(void)setDateOfLastSearch:(NSDate *)arg1 ;
-(WBSOpenSearchURLTemplate *)searchURLTemplateFromForm;
-(void)setSearchURLTemplateFromForm:(WBSOpenSearchURLTemplate *)arg1 ;
-(id)initWithSourcePageURLString:(id)arg1 searchURLTemplateFromForm:(id)arg2 delegate:(id)arg3 ;
-(void)setOpenSearchDescriptionURLString:(NSString *)arg1 ;
-(id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2 delegate:(id)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg1 delegate:(id)arg2 ;
-(NSString *)sourcePageURLString;
-(WBSOpenSearchDescription *)openSearchDescription;
@end

