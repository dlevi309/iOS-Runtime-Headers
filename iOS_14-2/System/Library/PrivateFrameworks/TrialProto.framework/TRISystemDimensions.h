/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface TRISystemDimensions : PBCodable <NSCopying> {

	NSString* _deviceClass;
	NSString* _osBuild;
	NSMutableArray* _userKeyboardEnabledInputModeIdentifiers;
	NSString* _userSettingsLanguageCode;
	NSString* _userSettingsRegionCode;
	NSString* _versionTag;
	BOOL _isBetaUser;
	BOOL _isInternalBuild;
	SCD_Struct_TR1 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceClass; 
@property (nonatomic,retain) NSString * deviceClass;                                                //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalBuild; 
@property (assign,nonatomic) BOOL isInternalBuild;                                                  //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
@property (assign,nonatomic) BOOL hasIsBetaUser; 
@property (assign,nonatomic) BOOL isBetaUser;                                                       //@synthesize isBetaUser=_isBetaUser - In the implementation block
@property (nonatomic,readonly) BOOL hasVersionTag; 
@property (nonatomic,retain) NSString * versionTag;                                                 //@synthesize versionTag=_versionTag - In the implementation block
@property (nonatomic,readonly) BOOL hasOsBuild; 
@property (nonatomic,retain) NSString * osBuild;                                                    //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasUserSettingsLanguageCode; 
@property (nonatomic,retain) NSString * userSettingsLanguageCode;                                   //@synthesize userSettingsLanguageCode=_userSettingsLanguageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasUserSettingsRegionCode; 
@property (nonatomic,retain) NSString * userSettingsRegionCode;                                     //@synthesize userSettingsRegionCode=_userSettingsRegionCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * userKeyboardEnabledInputModeIdentifiers;              //@synthesize userKeyboardEnabledInputModeIdentifiers=_userKeyboardEnabledInputModeIdentifiers - In the implementation block
+(id)systemDimensions;
+(Class)userKeyboardEnabledInputModeIdentifiersType;
-(id)dictionaryRepresentation;
-(NSString *)osBuild;
-(void)setIsInternalBuild:(BOOL)arg1 ;
-(NSString *)deviceClass;
-(BOOL)hasOsBuild;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasDeviceClass;
-(void)setOsBuild:(NSString *)arg1 ;
-(BOOL)isInternalBuild;
-(void)setDeviceClass:(NSString *)arg1 ;
-(BOOL)hasIsInternalBuild;
-(unsigned long long)hash;
-(void)setHasIsInternalBuild:(BOOL)arg1 ;
-(void)setVersionTag:(NSString *)arg1 ;
-(void)setIsBetaUser:(BOOL)arg1 ;
-(NSString *)userSettingsLanguageCode;
-(NSString *)userSettingsRegionCode;
-(void)setUserSettingsLanguageCode:(NSString *)arg1 ;
-(void)setUserSettingsRegionCode:(NSString *)arg1 ;
-(void)setUserKeyboardEnabledInputModeIdentifiers:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addUserKeyboardEnabledInputModeIdentifiers:(id)arg1 ;
-(unsigned long long)userKeyboardEnabledInputModeIdentifiersCount;
-(void)clearUserKeyboardEnabledInputModeIdentifiers;
-(id)userKeyboardEnabledInputModeIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsBetaUser:(BOOL)arg1 ;
-(BOOL)hasIsBetaUser;
-(BOOL)hasVersionTag;
-(BOOL)hasUserSettingsLanguageCode;
-(BOOL)hasUserSettingsRegionCode;
-(BOOL)isBetaUser;
-(NSString *)versionTag;
-(NSMutableArray *)userKeyboardEnabledInputModeIdentifiers;
@end

