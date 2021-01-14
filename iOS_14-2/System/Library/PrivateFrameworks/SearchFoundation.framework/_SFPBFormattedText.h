/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBFormattedText.h>
@class _SFPBText, _SFPBImage, NSData;


@protocol _SFPBFormattedText <NSObject>
@property (nonatomic,retain) _SFPBText * text; 
@property (nonatomic,retain) _SFPBImage * glyph; 
@property (assign,nonatomic) BOOL isEmphasized; 
@property (assign,nonatomic) BOOL isBold; 
@property (assign,nonatomic) int textColor; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)isBold;
-(_SFPBImage *)glyph;
-(int)textColor;
-(NSData *)jsonData;
-(void)setText:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setTextColor:(int)arg1;
-(void)setGlyph:(id)arg1;
-(void)setIsEmphasized:(BOOL)arg1;
-(_SFPBText *)text;
-(void)setIsBold:(BOOL)arg1;
-(BOOL)isEmphasized;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBText, _SFPBImage, NSData, NSString;

@interface _SFPBFormattedText : PBCodable <_SFPBFormattedText, NSSecureCoding> {

	BOOL _isEmphasized;
	BOOL _isBold;
	int _textColor;
	_SFPBText* _text;
	_SFPBImage* _glyph;

}

@property (nonatomic,retain) _SFPBText * text;                      //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) _SFPBImage * glyph;                    //@synthesize glyph=_glyph - In the implementation block
@property (assign,nonatomic) BOOL isEmphasized;                     //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (assign,nonatomic) BOOL isBold;                           //@synthesize isBold=_isBold - In the implementation block
@property (assign,nonatomic) int textColor;                         //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBold;
-(id)dictionaryRepresentation;
-(_SFPBImage *)glyph;
-(int)textColor;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setText:(_SFPBText *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTextColor:(int)arg1 ;
-(void)setGlyph:(_SFPBImage *)arg1 ;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(_SFPBText *)text;
-(unsigned long long)hash;
-(void)setIsBold:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isEmphasized;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

