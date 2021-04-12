/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)serviceType;
-(NSString *)characteristicType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(BOOL)hasServiceType;
-(void)setCharacteristicType:(NSString *)arg1 ;
-(BOOL)hasCharacteristicType;
@end

