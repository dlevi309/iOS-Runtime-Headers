/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(NSNumber *)maximumLines;
-(NSArray *)formattedTextList;
-(id)contentAdvisoryImageWithSession:(id)arg1 ;
-(id)moreGlyphsWithSession:(id)arg1 ;
-(NSArray *)moreGlyphRepresentations;
-(NSString *)contentAdvisoryString;
@end

