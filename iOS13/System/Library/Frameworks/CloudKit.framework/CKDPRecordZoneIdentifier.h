/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPIdentifier *)value;
-(void)setValue:(CKDPIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOwnerIdentifier:(CKDPIdentifier *)arg1 ;
-(BOOL)hasValue;
-(BOOL)hasOwnerIdentifier;
-(CKDPIdentifier *)ownerIdentifier;
@end

