/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMPBServiceReference, NSData;

@interface HMPBCharacteristicReference : PBCodable <NSCopying> {

	HMPBServiceReference* _serviceReference;
	NSData* _uniqueIdentifier;

}

@property (nonatomic,readonly) BOOL hasServiceReference; 
@property (nonatomic,retain) HMPBServiceReference * serviceReference;              //@synthesize serviceReference=_serviceReference - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSData * uniqueIdentifier;                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)characteristicReferenceWithCharacteristic:(id)arg1 ;
+(id)characteristicReferenceWithData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)uniqueIdentifier;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUniqueIdentifier:(NSData *)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(void)setServiceReference:(HMPBServiceReference *)arg1 ;
-(BOOL)hasServiceReference;
-(HMPBServiceReference *)serviceReference;
@end

