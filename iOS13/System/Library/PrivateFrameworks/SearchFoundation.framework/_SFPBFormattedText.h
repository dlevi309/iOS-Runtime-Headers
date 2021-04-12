/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(_SFPBText *)text;
-(void)setText:(id)arg1;
-(_SFPBImage *)glyph;
-(void)setTextColor:(int)arg1;
-(int)textColor;
-(BOOL)isBold;
-(void)setGlyph:(id)arg1;
-(NSData *)jsonData;
-(BOOL)isEmphasized;
-(void)setIsEmphasized:(BOOL)arg1;
-(void)setIsBold:(BOOL)arg1;
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBText * text;                      //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) _SFPBImage * glyph;                    //@synthesize glyph=_glyph - In the implementation block
@property (assign,nonatomic) BOOL isEmphasized;                     //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (assign,nonatomic) BOOL isBold;                           //@synthesize isBold=_isBold - In the implementation block
@property (assign,nonatomic) int textColor;                         //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(_SFPBText *)text;
-(void)setText:(_SFPBText *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(_SFPBImage *)glyph;
-(void)setTextColor:(int)arg1 ;
-(int)textColor;
-(BOOL)isBold;
-(void)setGlyph:(_SFPBImage *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)isEmphasized;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(void)setIsBold:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

