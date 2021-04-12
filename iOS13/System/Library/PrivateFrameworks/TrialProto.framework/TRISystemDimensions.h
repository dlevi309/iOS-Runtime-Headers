/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TRISystemDimensions : PBCodable <NSCopying> {

	NSString* _deviceClass;
	NSString* _versionTag;
	BOOL _isBetaUser;
	BOOL _isInternalBuild;
	SCD_Struct_TR8 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceClass; 
@property (nonatomic,retain) NSString * deviceClass;               //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalBuild; 
@property (assign,nonatomic) BOOL isInternalBuild;                 //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
@property (assign,nonatomic) BOOL hasIsBetaUser; 
@property (assign,nonatomic) BOOL isBetaUser;                      //@synthesize isBetaUser=_isBetaUser - In the implementation block
@property (nonatomic,readonly) BOOL hasVersionTag; 
@property (nonatomic,retain) NSString * versionTag;                //@synthesize versionTag=_versionTag - In the implementation block
+(id)systemDimensions;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)deviceClass;
-(BOOL)isInternalBuild;
-(void)setDeviceClass:(NSString *)arg1 ;
-(BOOL)hasDeviceClass;
-(void)setIsInternalBuild:(BOOL)arg1 ;
-(void)setHasIsInternalBuild:(BOOL)arg1 ;
-(BOOL)hasIsInternalBuild;
-(BOOL)isBetaUser;
-(void)setIsBetaUser:(BOOL)arg1 ;
-(void)setVersionTag:(NSString *)arg1 ;
-(void)setHasIsBetaUser:(BOOL)arg1 ;
-(BOOL)hasIsBetaUser;
-(BOOL)hasVersionTag;
-(NSString *)versionTag;
@end

