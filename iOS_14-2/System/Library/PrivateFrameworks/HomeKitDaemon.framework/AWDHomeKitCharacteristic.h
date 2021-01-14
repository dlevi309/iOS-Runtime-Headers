/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitCharacteristic : PBCodable <NSCopying> {

	NSString* _characteristicType;
	NSString* _serviceType;

}

@property (nonatomic,readonly) BOOL hasServiceType; 
@property (nonatomic,retain) NSString * serviceType;                     //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) BOOL hasCharacteristicType; 
@property (nonatomic,retain) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)characteristicType;
-(void)mergeFrom:(id)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setCharacteristicType:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)serviceType;
-(BOOL)hasServiceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCharacteristicType;
@end

