/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, WBSOpenSearchURLTemplate;

@interface WBSOpenSearchDescription : NSObject {

	NSString* _descriptionDocumentURLString;
	WBSOpenSearchURLTemplate* _searchURLTemplate;
	WBSOpenSearchURLTemplate* _urlTemplateForSuggestionsInJSON;
	WBSOpenSearchURLTemplate* _urlTemplateForSuggestionsInXML;

}

@property (nonatomic,readonly) NSString * descriptionDocumentURLString;                                 //@synthesize descriptionDocumentURLString=_descriptionDocumentURLString - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * searchURLTemplate;                            //@synthesize searchURLTemplate=_searchURLTemplate - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * urlTemplateForSuggestionsInJSON;              //@synthesize urlTemplateForSuggestionsInJSON=_urlTemplateForSuggestionsInJSON - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * urlTemplateForSuggestionsInXML;               //@synthesize urlTemplateForSuggestionsInXML=_urlTemplateForSuggestionsInXML - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)descriptionDocumentURLString;
-(WBSOpenSearchURLTemplate *)searchURLTemplate;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInXML;
-(id)initWithDescriptionDocumentURLString:(id)arg1 searchURLTemplate:(id)arg2 urlTemplateForSuggestionsInJSON:(id)arg3 urlTemplateForSuggestionsInXML:(id)arg4 ;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInJSON;
@end

