/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeKitMultiUserSettingsValueString; 
@property (nonatomic,retain) NSString * homeKitMultiUserSettingsValueString;              //@synthesize homeKitMultiUserSettingsValueString=_homeKitMultiUserSettingsValueString - In the implementation block
@property (assign,nonatomic) BOOL hasHomeKitMultiUserSettingsValueInteger; 
@property (assign,nonatomic) long long homeKitMultiUserSettingsValueInteger;              //@synthesize homeKitMultiUserSettingsValueInteger=_homeKitMultiUserSettingsValueInteger - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeKitMultiUserSettingsValueData; 
@property (nonatomic,retain) NSData * homeKitMultiUserSettingsValueData;                  //@synthesize homeKitMultiUserSettingsValueData=_homeKitMultiUserSettingsValueData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
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

