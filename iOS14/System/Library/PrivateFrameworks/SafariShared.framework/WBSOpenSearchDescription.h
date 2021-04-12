/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(WBSOpenSearchURLTemplate *)searchURLTemplate;
-(unsigned long long)hash;
-(NSString *)descriptionDocumentURLString;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInXML;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInJSON;
-(id)initWithDescriptionDocumentURLString:(id)arg1 searchURLTemplate:(id)arg2 urlTemplateForSuggestionsInJSON:(id)arg3 urlTemplateForSuggestionsInXML:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
@end

