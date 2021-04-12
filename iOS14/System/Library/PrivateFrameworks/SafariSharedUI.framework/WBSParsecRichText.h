/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariShared/WBSParsecModel.h>

@class WBSParsecImageRepresentation, NSString, NSNumber, NSArray;

@interface WBSParsecRichText : WBSParsecModel {

	WBSParsecImageRepresentation* _contentAdvisoryImage;
	NSString* _text;
	NSNumber* _maximumLines;
	NSArray* _formattedTextList;
	NSArray* _moreGlyphRepresentations;
	NSString* _contentAdvisoryString;

}

@property (nonatomic,readonly) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumLines;                         //@synthesize maximumLines=_maximumLines - In the implementation block
@property (nonatomic,readonly) NSArray * formattedTextList;                     //@synthesize formattedTextList=_formattedTextList - In the implementation block
@property (nonatomic,readonly) NSArray * moreGlyphRepresentations;              //@synthesize moreGlyphRepresentations=_moreGlyphRepresentations - In the implementation block
@property (nonatomic,readonly) NSString * contentAdvisoryString;                //@synthesize contentAdvisoryString=_contentAdvisoryString - In the implementation block
+(id)schema;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)maximumLines;
-(NSString *)text;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)formattedTextList;
-(id)contentAdvisoryImageWithSession:(id)arg1 ;
-(id)moreGlyphsWithSession:(id)arg1 ;
-(NSArray *)moreGlyphRepresentations;
-(NSString *)contentAdvisoryString;
@end

