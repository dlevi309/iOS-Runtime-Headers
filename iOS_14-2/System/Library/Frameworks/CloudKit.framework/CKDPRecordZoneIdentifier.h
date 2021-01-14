/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPIdentifier;

@interface CKDPRecordZoneIdentifier : PBCodable <NSCopying> {

	CKDPIdentifier* _ownerIdentifier;
	CKDPIdentifier* _value;

}

@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPIdentifier * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * ownerIdentifier;              //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(void)setOwnerIdentifier:(CKDPIdentifier *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(CKDPIdentifier *)arg1 ;
-(id)description;
-(CKDPIdentifier *)ownerIdentifier;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasOwnerIdentifier;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPIdentifier *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

