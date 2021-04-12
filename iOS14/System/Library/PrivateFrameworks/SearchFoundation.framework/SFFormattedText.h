/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFText.h>
#import <libobjc.A.dylib/SFFormattedText.h>
@class SFImage, NSDictionary, NSData;


@protocol SFFormattedText <SFText>
@property (nonatomic,retain) SFImage * glyph; 
@property (assign,nonatomic) BOOL isEmphasized; 
@property (assign,nonatomic) BOOL isBold; 
@property (assign,nonatomic) int textColor; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)isBold;
-(NSDictionary *)dictionaryRepresentation;
-(SFImage *)glyph;
-(int)textColor;
-(NSData *)jsonData;
-(void)setTextColor:(int)arg1;
-(void)setGlyph:(id)arg1;
-(void)setIsEmphasized:(BOOL)arg1;
-(void)setIsBold:(BOOL)arg1;
-(BOOL)isEmphasized;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFImage, NSDictionary, NSData, NSString;

@interface SFFormattedText : SFText <SFFormattedText, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	BOOL _isEmphasized;
	BOOL _isBold;
	int _textColor;
	SFImage* _glyph;

}

@property (nonatomic,retain) SFImage * glyph;                                        //@synthesize glyph=_glyph - In the implementation block
@property (assign,nonatomic) BOOL isEmphasized;                                      //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (assign,nonatomic) BOOL isBold;                                            //@synthesize isBold=_isBold - In the implementation block
@property (assign,nonatomic) int textColor;                                          //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (copy) NSString * text; 
@property (assign,nonatomic) unsigned long long maxLines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isBold;
-(NSDictionary *)dictionaryRepresentation;
-(SFImage *)glyph;
-(int)textColor;
-(BOOL)hasIsEmphasized;
-(BOOL)hasIsBold;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTextColor:(int)arg1 ;
-(void)setGlyph:(SFImage *)arg1 ;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setIsBold:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasTextColor;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)isEmphasized;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

