/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPIdentifier;

@interface FCCKPRecordZoneIdentifier : PBCodable <NSCopying> {

	FCCKPIdentifier* _ownerIdentifier;
	FCCKPIdentifier* _value;

}

@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) FCCKPIdentifier * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerIdentifier; 
@property (nonatomic,retain) FCCKPIdentifier * ownerIdentifier;              //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(void)setOwnerIdentifier:(FCCKPIdentifier *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(FCCKPIdentifier *)arg1 ;
-(id)description;
-(FCCKPIdentifier *)ownerIdentifier;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasOwnerIdentifier;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCCKPIdentifier *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

