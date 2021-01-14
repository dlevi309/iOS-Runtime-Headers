/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBText.h>
@class NSString, NSData;


@protocol _SFPBText <NSObject>
@property (copy) NSString * text; 
@property (assign,nonatomic) unsigned maxLines; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setMaxLines:(unsigned)arg1;
-(NSData *)jsonData;
-(void)setText:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)text;
-(unsigned)maxLines;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBText : PBCodable <_SFPBText, NSSecureCoding> {

	unsigned _maxLines;
	NSString* _text;

}

@property (copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned maxLines;                     //@synthesize maxLines=_maxLines - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setMaxLines:(unsigned)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setText:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)maxLines;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

