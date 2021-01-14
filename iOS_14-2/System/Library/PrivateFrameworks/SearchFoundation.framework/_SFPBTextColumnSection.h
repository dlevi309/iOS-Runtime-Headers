/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTextColumnSection.h>
@class NSArray, NSData;


@protocol _SFPBTextColumnSection <NSObject>
@property (nonatomic,copy) NSArray * textLines; 
@property (assign,nonatomic) BOOL textNoWrap; 
@property (assign,nonatomic) unsigned textWeight; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setTextLines:(id)arg1;
-(void)setTextNoWrap:(BOOL)arg1;
-(void)setTextWeight:(unsigned)arg1;
-(NSData *)jsonData;
-(NSArray *)textLines;
-(BOOL)textNoWrap;
-(unsigned)textWeight;
-(id)initWithDictionary:(id)arg1;
-(void)addTextLines:(id)arg1;
-(void)clearTextLines;
-(unsigned long long)textLinesCount;
-(id)textLinesAtIndex:(unsigned long long)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumnSection : PBCodable <_SFPBTextColumnSection, NSSecureCoding> {

	BOOL _textNoWrap;
	unsigned _textWeight;
	NSArray* _textLines;

}

@property (nonatomic,copy) NSArray * textLines;                     //@synthesize textLines=_textLines - In the implementation block
@property (assign,nonatomic) BOOL textNoWrap;                       //@synthesize textNoWrap=_textNoWrap - In the implementation block
@property (assign,nonatomic) unsigned textWeight;                   //@synthesize textWeight=_textWeight - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(void)setTextLines:(NSArray *)arg1 ;
-(void)setTextNoWrap:(BOOL)arg1 ;
-(void)setTextWeight:(unsigned)arg1 ;
-(NSData *)jsonData;
-(NSArray *)textLines;
-(BOOL)textNoWrap;
-(unsigned)textWeight;
-(id)initWithDictionary:(id)arg1 ;
-(void)addTextLines:(id)arg1 ;
-(void)clearTextLines;
-(unsigned long long)textLinesCount;
-(id)textLinesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

