/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXAnchorModelPBLaunchHistoryMetadata, NSString;

@interface ATXAnchorModelPBAppLaunchMetadata : PBCodable <NSCopying> {

	long long _app2VecCluster;
	long long _genreId;
	ATXAnchorModelPBLaunchHistoryMetadata* _appLaunchHistory;
	NSString* _bundleId;
	int _relativeTimeSinceAnchorInSeconds;
	BOOL _appInstalledInLast48Hours;
	SCD_Struct_AT1 _has;

}

@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                                                   //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasAppLaunchHistory; 
@property (nonatomic,retain) ATXAnchorModelPBLaunchHistoryMetadata * appLaunchHistory;              //@synthesize appLaunchHistory=_appLaunchHistory - In the implementation block
@property (assign,nonatomic) BOOL hasAppInstalledInLast48Hours; 
@property (assign,nonatomic) BOOL appInstalledInLast48Hours;                                        //@synthesize appInstalledInLast48Hours=_appInstalledInLast48Hours - In the implementation block
@property (assign,nonatomic) BOOL hasRelativeTimeSinceAnchorInSeconds; 
@property (assign,nonatomic) int relativeTimeSinceAnchorInSeconds;                                  //@synthesize relativeTimeSinceAnchorInSeconds=_relativeTimeSinceAnchorInSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasGenreId; 
@property (assign,nonatomic) long long genreId;                                                     //@synthesize genreId=_genreId - In the implementation block
@property (assign,nonatomic) BOOL hasApp2VecCluster; 
@property (assign,nonatomic) long long app2VecCluster;                                              //@synthesize app2VecCluster=_app2VecCluster - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleId;
-(BOOL)hasAppLaunchHistory;
-(void)setAppInstalledInLast48Hours:(BOOL)arg1 ;
-(void)setHasAppInstalledInLast48Hours:(BOOL)arg1 ;
-(BOOL)hasAppInstalledInLast48Hours;
-(void)setRelativeTimeSinceAnchorInSeconds:(int)arg1 ;
-(void)setHasRelativeTimeSinceAnchorInSeconds:(BOOL)arg1 ;
-(BOOL)hasRelativeTimeSinceAnchorInSeconds;
-(void)setGenreId:(long long)arg1 ;
-(void)setHasGenreId:(BOOL)arg1 ;
-(BOOL)hasGenreId;
-(void)setApp2VecCluster:(long long)arg1 ;
-(void)setHasApp2VecCluster:(BOOL)arg1 ;
-(BOOL)hasApp2VecCluster;
-(ATXAnchorModelPBLaunchHistoryMetadata *)appLaunchHistory;
-(void)setAppLaunchHistory:(ATXAnchorModelPBLaunchHistoryMetadata *)arg1 ;
-(BOOL)appInstalledInLast48Hours;
-(int)relativeTimeSinceAnchorInSeconds;
-(long long)genreId;
-(long long)app2VecCluster;
@end

