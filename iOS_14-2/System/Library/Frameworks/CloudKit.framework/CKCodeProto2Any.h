/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKCodeProto2Any : PBCodable <NSCopying> {

	NSString* _typeUrl;
	NSData* _value;

}

@property (nonatomic,readonly) BOOL hasTypeUrl; 
@property (nonatomic,retain) NSString * typeUrl;              //@synthesize typeUrl=_typeUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSData * value;                  //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(NSString *)typeUrl;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(NSData *)arg1 ;
-(id)description;
-(void)setTypeUrl:(NSString *)arg1 ;
-(BOOL)hasTypeUrl;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

