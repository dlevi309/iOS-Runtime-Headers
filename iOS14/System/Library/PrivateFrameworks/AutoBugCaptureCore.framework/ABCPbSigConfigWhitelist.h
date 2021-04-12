/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ABCPbSigConfigWhitelist : PBCodable <NSCopying> {

	NSString* _build;
	NSString* _buildVariant;
	NSString* _deviceModel;
	int _globalDecision;
	NSMutableArray* _sigConfigs;
	SCD_Struct_AB4 _has;

}

@property (assign,nonatomic) BOOL hasGlobalDecision; 
@property (assign,nonatomic) int globalDecision;                       //@synthesize globalDecision=_globalDecision - In the implementation block
@property (nonatomic,readonly) BOOL hasBuild; 
@property (nonatomic,retain) NSString * build;                         //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) BOOL hasBuildVariant; 
@property (nonatomic,retain) NSString * buildVariant;                  //@synthesize buildVariant=_buildVariant - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                   //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSMutableArray * sigConfigs;              //@synthesize sigConfigs=_sigConfigs - In the implementation block
+(Class)sigConfigType;
-(id)dictionaryRepresentation;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(NSString *)build;
-(BOOL)hasDeviceModel;
-(void)setBuild:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasBuild;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)buildVariant;
-(void)setBuildVariant:(NSString *)arg1 ;
-(BOOL)hasBuildVariant;
-(void)addSigConfig:(id)arg1 ;
-(unsigned long long)sigConfigsCount;
-(void)clearSigConfigs;
-(id)sigConfigAtIndex:(unsigned long long)arg1 ;
-(int)globalDecision;
-(void)setGlobalDecision:(int)arg1 ;
-(void)setHasGlobalDecision:(BOOL)arg1 ;
-(BOOL)hasGlobalDecision;
-(id)globalDecisionAsString:(int)arg1 ;
-(int)StringAsGlobalDecision:(id)arg1 ;
-(NSMutableArray *)sigConfigs;
-(void)setSigConfigs:(NSMutableArray *)arg1 ;
@end

