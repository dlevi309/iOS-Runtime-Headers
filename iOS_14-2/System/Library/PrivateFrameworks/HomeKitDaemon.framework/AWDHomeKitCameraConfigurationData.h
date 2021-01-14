/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitCameraConfigurationData : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _homeConfigurations;
	BOOL _isDemoConfiguration;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeConfigurations;              //@synthesize homeConfigurations=_homeConfigurations - In the implementation block
@property (assign,nonatomic) BOOL hasIsDemoConfiguration; 
@property (assign,nonatomic) BOOL isDemoConfiguration;                         //@synthesize isDemoConfiguration=_isDemoConfiguration - In the implementation block
+(Class)homeConfigurationsType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)homeConfigurations;
-(void)addHomeConfigurations:(id)arg1 ;
-(unsigned long long)homeConfigurationsCount;
-(void)clearHomeConfigurations;
-(id)homeConfigurationsAtIndex:(unsigned long long)arg1 ;
-(void)setIsDemoConfiguration:(BOOL)arg1 ;
-(void)setHasIsDemoConfiguration:(BOOL)arg1 ;
-(BOOL)hasIsDemoConfiguration;
-(void)setHomeConfigurations:(NSMutableArray *)arg1 ;
-(BOOL)isDemoConfiguration;
@end

