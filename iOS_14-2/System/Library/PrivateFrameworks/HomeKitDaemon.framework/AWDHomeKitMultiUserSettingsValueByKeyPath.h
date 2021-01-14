/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDHomeKitMultiUserSettingsValueByKeyPath : PBCodable <NSCopying> {

	long long _homeKitMultiUserSettingsValueInteger;
	NSData* _homeKitMultiUserSettingsValueData;
	NSString* _homeKitMultiUserSettingsValueString;
	int _type;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeKitMultiUserSettingsValueString; 
@property (nonatomic,retain) NSString * homeKitMultiUserSettingsValueString;              //@synthesize homeKitMultiUserSettingsValueString=_homeKitMultiUserSettingsValueString - In the implementation block
@property (assign,nonatomic) BOOL hasHomeKitMultiUserSettingsValueInteger; 
@property (assign,nonatomic) long long homeKitMultiUserSettingsValueInteger;              //@synthesize homeKitMultiUserSettingsValueInteger=_homeKitMultiUserSettingsValueInteger - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeKitMultiUserSettingsValueData; 
@property (nonatomic,retain) NSData * homeKitMultiUserSettingsValueData;                  //@synthesize homeKitMultiUserSettingsValueData=_homeKitMultiUserSettingsValueData - In the implementation block
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHomeKitMultiUserSettingsValueString:(NSString *)arg1 ;
-(void)setHomeKitMultiUserSettingsValueData:(NSData *)arg1 ;
-(BOOL)hasHomeKitMultiUserSettingsValueString;
-(void)setHomeKitMultiUserSettingsValueInteger:(long long)arg1 ;
-(void)setHasHomeKitMultiUserSettingsValueInteger:(BOOL)arg1 ;
-(BOOL)hasHomeKitMultiUserSettingsValueInteger;
-(BOOL)hasHomeKitMultiUserSettingsValueData;
-(NSString *)homeKitMultiUserSettingsValueString;
-(long long)homeKitMultiUserSettingsValueInteger;
-(NSData *)homeKitMultiUserSettingsValueData;
@end

