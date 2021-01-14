/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMPBHomeReference, NSData;

@interface HMPBAccessoryReference : PBCodable <NSCopying> {

	HMPBHomeReference* _homeReference;
	NSData* _uniqueIdentifier;

}

@property (nonatomic,readonly) BOOL hasHomeReference; 
@property (nonatomic,retain) HMPBHomeReference * homeReference;              //@synthesize homeReference=_homeReference - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSData * uniqueIdentifier;                      //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)accessoryReferenceWithAccessory:(id)arg1 ;
+(id)accessoryReferenceWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUniqueIdentifier:(NSData *)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(NSData *)uniqueIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHomeReference:(HMPBHomeReference *)arg1 ;
-(BOOL)hasHomeReference;
-(HMPBHomeReference *)homeReference;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

