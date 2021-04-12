/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSParsecLegacySearchResult.h>
#import <libobjc.A.dylib/WBSParsecSearchGenericResult.h>

@class WBSParsecActionButton, NSNumber, NSArray, NSString, WBSParsecImageRepresentation, WBSParsecAuxiliaryInfo;

@interface WBSParsecSearchGenericResult : WBSParsecLegacySearchResult <WBSParsecSearchGenericResult> {

	WBSParsecActionButton* _actionButton;
	NSNumber* _titleMaximumLines;
	NSArray* _descriptionRichTexts;
	NSString* _footnote;
	NSString* _secondaryTitle;
	WBSParsecImageRepresentation* _secondaryTitleGlyph;
	WBSParsecAuxiliaryInfo* _auxiliaryInfo;
	WBSParsecImageRepresentation* _thumbnail;

}

@property (nonatomic,readonly) NSNumber * titleMaximumLines;                                    //@synthesize titleMaximumLines=_titleMaximumLines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * descriptionRichTexts;                             //@synthesize descriptionRichTexts=_descriptionRichTexts - In the implementation block
@property (nonatomic,copy,readonly) NSString * footnote;                                        //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryTitle;                                  //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * secondaryTitleGlyph;              //@synthesize secondaryTitleGlyph=_secondaryTitleGlyph - In the implementation block
@property (nonatomic,readonly) WBSParsecAuxiliaryInfo * auxiliaryInfo;                          //@synthesize auxiliaryInfo=_auxiliaryInfo - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * thumbnail;                        //@synthesize thumbnail=_thumbnail - In the implementation block
+(id)_specializedSchema;
-(WBSParsecImageRepresentation *)thumbnail;
-(id)initWithDictionary:(id)arg1 ;
-(id)actionButton;
-(NSString *)footnote;
-(NSString *)secondaryTitle;
-(NSNumber *)titleMaximumLines;
-(NSArray *)descriptionRichTexts;
-(WBSParsecImageRepresentation *)secondaryTitleGlyph;
-(WBSParsecAuxiliaryInfo *)auxiliaryInfo;
-(id)thumbnailWithSession:(id)arg1 ;
@end

