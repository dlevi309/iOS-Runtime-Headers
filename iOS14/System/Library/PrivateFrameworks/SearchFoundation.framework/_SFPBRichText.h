/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBRichText.h>
@class _SFPBText, _SFPBGraphicalFloat, NSString, NSArray, NSData;


@protocol _SFPBRichText <NSObject>
@property (nonatomic,retain) _SFPBText * text; 
@property (nonatomic,retain) _SFPBGraphicalFloat * starRating; 
@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSArray * formattedTextPieces; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(unsigned long long)iconsCount;
-(NSArray *)icons;
-(void)setContentAdvisory:(id)arg1;
-(void)setIcons:(id)arg1;
-(void)clearIcons;
-(void)addIcons:(id)arg1;
-(_SFPBGraphicalFloat *)starRating;
-(NSData *)jsonData;
-(NSString *)contentAdvisory;
-(NSArray *)formattedTextPieces;
-(void)setText:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setFormattedTextPieces:(id)arg1;
-(void)addFormattedTextPieces:(id)arg1;
-(void)clearFormattedTextPieces;
-(unsigned long long)formattedTextPiecesCount;
-(id)formattedTextPiecesAtIndex:(unsigned long long)arg1;
-(void)setStarRating:(id)arg1;
-(_SFPBText *)text;
-(id)iconsAtIndex:(unsigned long long)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBText, _SFPBGraphicalFloat, NSString, NSArray, NSData;

@interface _SFPBRichText : PBCodable <_SFPBRichText, NSSecureCoding> {

	_SFPBText* _text;
	_SFPBGraphicalFloat* _starRating;
	NSString* _contentAdvisory;
	NSArray* _icons;
	NSArray* _formattedTextPieces;

}

@property (nonatomic,retain) _SFPBText * text;                              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * starRating;              //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                      //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,copy) NSArray * icons;                                 //@synthesize icons=_icons - In the implementation block
@property (nonatomic,copy) NSArray * formattedTextPieces;                   //@synthesize formattedTextPieces=_formattedTextPieces - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(unsigned long long)iconsCount;
-(NSArray *)icons;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(void)setIcons:(NSArray *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(void)clearIcons;
-(void)addIcons:(id)arg1 ;
-(_SFPBGraphicalFloat *)starRating;
-(NSData *)jsonData;
-(NSString *)contentAdvisory;
-(NSArray *)formattedTextPieces;
-(void)setText:(_SFPBText *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setFormattedTextPieces:(NSArray *)arg1 ;
-(void)addFormattedTextPieces:(id)arg1 ;
-(void)clearFormattedTextPieces;
-(unsigned long long)formattedTextPiecesCount;
-(id)formattedTextPiecesAtIndex:(unsigned long long)arg1 ;
-(void)setStarRating:(_SFPBGraphicalFloat *)arg1 ;
-(_SFPBText *)text;
-(id)iconsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

