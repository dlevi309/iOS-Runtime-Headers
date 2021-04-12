/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXAnchorModelPBActionKeyMetadata, NSMutableArray, ATXAnchorModelPBAppLaunchMetadata;

@interface ATXAnchorModelPBActionMetadata : PBCodable <NSCopying> {

	ATXAnchorModelPBActionKeyMetadata* _actionKeyMetadata;
	int _actionType;
	NSMutableArray* _actionUUIDMetadatas;
	ATXAnchorModelPBAppLaunchMetadata* _appLaunchMetadata;
	SCD_Struct_AT4 _has;

}

@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                                                     //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) BOOL hasAppLaunchMetadata; 
@property (nonatomic,retain) ATXAnchorModelPBAppLaunchMetadata * appLaunchMetadata;              //@synthesize appLaunchMetadata=_appLaunchMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasActionKeyMetadata; 
@property (nonatomic,retain) ATXAnchorModelPBActionKeyMetadata * actionKeyMetadata;              //@synthesize actionKeyMetadata=_actionKeyMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionUUIDMetadatas;                               //@synthesize actionUUIDMetadatas=_actionUUIDMetadatas - In the implementation block
+(Class)actionUUIDMetadataType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)actionType;
-(void)setActionType:(int)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(BOOL)hasAppLaunchMetadata;
-(BOOL)hasActionKeyMetadata;
-(void)clearActionUUIDMetadatas;
-(void)addActionUUIDMetadata:(id)arg1 ;
-(unsigned long long)actionUUIDMetadatasCount;
-(id)actionUUIDMetadataAtIndex:(unsigned long long)arg1 ;
-(ATXAnchorModelPBAppLaunchMetadata *)appLaunchMetadata;
-(void)setAppLaunchMetadata:(ATXAnchorModelPBAppLaunchMetadata *)arg1 ;
-(ATXAnchorModelPBActionKeyMetadata *)actionKeyMetadata;
-(void)setActionKeyMetadata:(ATXAnchorModelPBActionKeyMetadata *)arg1 ;
-(NSMutableArray *)actionUUIDMetadatas;
-(void)setActionUUIDMetadatas:(NSMutableArray *)arg1 ;
@end

