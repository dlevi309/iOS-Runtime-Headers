/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCCKPIdentifier *)value;
-(void)setValue:(FCCKPIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOwnerIdentifier:(FCCKPIdentifier *)arg1 ;
-(BOOL)hasValue;
-(BOOL)hasOwnerIdentifier;
-(FCCKPIdentifier *)ownerIdentifier;
@end

