/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface NPKProtoStandalonePass : PBCodable <NSCopying> {

	NSString* _deviceName;
	NSData* _imageData;
	NSString* _localizedDescription;
	NSString* _localizedName;
	NSString* _organizationName;
	int _passType;
	NSString* _passTypeIdentifier;
	NSString* _serialNumber;
	NSMutableArray* _userInfos;
	BOOL _remotePass;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPassType; 
@property (assign,nonatomic) int passType;                                 //@synthesize passType=_passType - In the implementation block
@property (nonatomic,readonly) BOOL hasSerialNumber; 
@property (nonatomic,retain) NSString * serialNumber;                      //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasPassTypeIdentifier; 
@property (nonatomic,retain) NSString * passTypeIdentifier;                //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;                           //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedName; 
@property (nonatomic,retain) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (nonatomic,retain) NSString * organizationName;                  //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,retain) NSMutableArray * userInfos;                   //@synthesize userInfos=_userInfos - In the implementation block
@property (assign,nonatomic) BOOL hasRemotePass; 
@property (assign,nonatomic) BOOL remotePass;                              //@synthesize remotePass=_remotePass - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                        //@synthesize deviceName=_deviceName - In the implementation block
+(Class)userInfosType;
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)localizedName;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(int)passType;
-(NSString *)organizationName;
-(BOOL)hasLocalizedDescription;
-(BOOL)hasDeviceName;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)userInfos;
-(void)setUserInfos:(NSMutableArray *)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(BOOL)hasSerialNumber;
-(NSData *)imageData;
-(void)setOrganizationName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasOrganizationName;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPassType:(int)arg1 ;
-(void)setRemotePass:(BOOL)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasImageData;
-(unsigned long long)userInfosCount;
-(void)clearUserInfos;
-(void)addUserInfos:(id)arg1 ;
-(id)userInfosAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPassTypeIdentifier;
-(BOOL)hasLocalizedName;
-(void)setHasPassType:(BOOL)arg1 ;
-(BOOL)hasPassType;
-(id)passTypeAsString:(int)arg1 ;
-(int)StringAsPassType:(id)arg1 ;
-(void)setHasRemotePass:(BOOL)arg1 ;
-(BOOL)hasRemotePass;
-(BOOL)remotePass;
@end

