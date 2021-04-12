/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBSymbolImage.h>
@class NSString, NSData;


@protocol _SFPBSymbolImage <NSObject>
@property (nonatomic,copy) NSString * symbolName; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)symbolName;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(void)setSymbolName:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBSymbolImage : PBCodable <_SFPBSymbolImage, NSSecureCoding> {

	NSString* _symbolName;

}

@property (nonatomic,copy) NSString * symbolName;                   //@synthesize symbolName=_symbolName - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(NSString *)symbolName;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSymbolName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

