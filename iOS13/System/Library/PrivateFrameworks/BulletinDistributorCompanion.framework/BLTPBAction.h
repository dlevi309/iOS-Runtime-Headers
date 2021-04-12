/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBAppearance, NSData, NSString;

@interface BLTPBAction : PBCodable <NSCopying> {

	int _activationMode;
	BLTPBAppearance* _appearance;
	int _behavior;
	NSData* _behaviorParameters;
	NSData* _behaviorParametersNulls;
	NSString* _identifier;
	NSString* _launchURL;
	SCD_Struct_BL1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) BLTPBAppearance * appearance;                   //@synthesize appearance=_appearance - In the implementation block
@property (assign,nonatomic) int activationMode;                             //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,readonly) BOOL hasLaunchURL; 
@property (nonatomic,retain) NSString * launchURL;                           //@synthesize launchURL=_launchURL - In the implementation block
@property (assign,nonatomic) BOOL hasBehavior; 
@property (assign,nonatomic) int behavior;                                   //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) BOOL hasBehaviorParameters; 
@property (nonatomic,retain) NSData * behaviorParameters;                    //@synthesize behaviorParameters=_behaviorParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasBehaviorParametersNulls; 
@property (nonatomic,retain) NSData * behaviorParametersNulls;               //@synthesize behaviorParametersNulls=_behaviorParametersNulls - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BLTPBAppearance *)appearance;
-(void)setAppearance:(BLTPBAppearance *)arg1 ;
-(int)activationMode;
-(void)setActivationMode:(int)arg1 ;
-(int)behavior;
-(void)setBehavior:(int)arg1 ;
-(NSString *)launchURL;
-(void)setLaunchURL:(NSString *)arg1 ;
-(BOOL)hasIdentifier;
-(NSData *)behaviorParameters;
-(void)setBehaviorParameters:(NSData *)arg1 ;
-(void)setBehaviorParametersNulls:(NSData *)arg1 ;
-(BOOL)hasLaunchURL;
-(void)setHasBehavior:(BOOL)arg1 ;
-(BOOL)hasBehavior;
-(BOOL)hasBehaviorParameters;
-(BOOL)hasBehaviorParametersNulls;
-(NSData *)behaviorParametersNulls;
@end

