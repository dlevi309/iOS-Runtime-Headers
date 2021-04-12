/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(NSArray *)icons;
-(_SFPBText *)text;
-(void)setText:(id)arg1;
-(void)setIcons:(id)arg1;
-(unsigned long long)iconsCount;
-(void)clearIcons;
-(NSData *)jsonData;
-(_SFPBGraphicalFloat *)starRating;
-(void)setStarRating:(id)arg1;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(id)arg1;
-(NSArray *)formattedTextPieces;
-(void)setFormattedTextPieces:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addIcons:(id)arg1;
-(void)addFormattedTextPieces:(id)arg1;
-(id)iconsAtIndex:(unsigned long long)arg1;
-(void)clearFormattedTextPieces;
-(unsigned long long)formattedTextPiecesCount;
-(id)formattedTextPiecesAtIndex:(unsigned long long)arg1;

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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBText * text;                              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * starRating;              //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                      //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,copy) NSArray * icons;                                 //@synthesize icons=_icons - In the implementation block
@property (nonatomic,copy) NSArray * formattedTextPieces;                   //@synthesize formattedTextPieces=_formattedTextPieces - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)icons;
-(void)writeTo:(id)arg1 ;
-(_SFPBText *)text;
-(void)setText:(_SFPBText *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIcons:(NSArray *)arg1 ;
-(unsigned long long)iconsCount;
-(void)clearIcons;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(_SFPBGraphicalFloat *)starRating;
-(void)setStarRating:(_SFPBGraphicalFloat *)arg1 ;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(NSArray *)formattedTextPieces;
-(void)setFormattedTextPieces:(NSArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addIcons:(id)arg1 ;
-(void)addFormattedTextPieces:(id)arg1 ;
-(id)iconsAtIndex:(unsigned long long)arg1 ;
-(void)clearFormattedTextPieces;
-(unsigned long long)formattedTextPiecesCount;
-(id)formattedTextPiecesAtIndex:(unsigned long long)arg1 ;
@end

