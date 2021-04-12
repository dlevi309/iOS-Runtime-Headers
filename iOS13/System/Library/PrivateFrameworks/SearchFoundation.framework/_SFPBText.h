/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(NSString *)text;
-(void)setText:(id)arg1;
-(NSData *)jsonData;
-(unsigned)maxLines;
-(void)setMaxLines:(unsigned)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBText : PBCodable <_SFPBText, NSSecureCoding> {

	unsigned _maxLines;
	NSString* _text;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned maxLines;                     //@synthesize maxLines=_maxLines - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(unsigned)maxLines;
-(void)setMaxLines:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

