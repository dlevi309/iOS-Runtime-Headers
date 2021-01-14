/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBNamedProtobufMessage.h>
@class NSData, NSString;


@protocol _SFPBNamedProtobufMessage <NSObject>
@property (nonatomic,copy) NSData * protobufMessageData; 
@property (nonatomic,copy) NSString * protobufMessageName; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(void)setProtobufMessageData:(id)arg1;
-(void)setProtobufMessageName:(id)arg1;
-(NSData *)protobufMessageData;
-(NSString *)protobufMessageName;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBNamedProtobufMessage : PBCodable <_SFPBNamedProtobufMessage, NSSecureCoding> {

	NSData* _protobufMessageData;
	NSString* _protobufMessageName;

}

@property (nonatomic,copy) NSData * protobufMessageData;                //@synthesize protobufMessageData=_protobufMessageData - In the implementation block
@property (nonatomic,copy) NSString * protobufMessageName;              //@synthesize protobufMessageName=_protobufMessageName - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setProtobufMessageData:(NSData *)arg1 ;
-(void)setProtobufMessageName:(NSString *)arg1 ;
-(NSData *)protobufMessageData;
-(NSString *)protobufMessageName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

