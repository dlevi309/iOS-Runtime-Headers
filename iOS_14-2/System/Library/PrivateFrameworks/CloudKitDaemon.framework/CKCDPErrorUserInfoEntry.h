/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKCDPErrorUserInfoValue;

@interface CKCDPErrorUserInfoEntry : PBCodable <NSCopying> {

	NSString* _key;
	CKCDPErrorUserInfoValue* _value;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKCDPErrorUserInfoValue * value;              //@synthesize value=_value - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(CKCDPErrorUserInfoValue *)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(CKCDPErrorUserInfoValue *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

