/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue;

@interface CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoEntry : PBCodable <NSCopying> {

	NSString* _key;
	CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue* _value;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue * value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue *)value;
-(void)setValue:(CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)hasValue;
@end

