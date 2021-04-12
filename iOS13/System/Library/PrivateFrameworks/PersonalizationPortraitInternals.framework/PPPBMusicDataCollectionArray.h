/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface PPPBMusicDataCollectionArray : PBCodable <NSCopying> {

	NSString* _assetVersion;
	NSMutableArray* _experimentalGroups;
	NSMutableArray* _records;
	BOOL _hasMusicSubscription;
	SCD_Struct_PP1 _has;

}

@property (nonatomic,retain) NSMutableArray * records;                         //@synthesize records=_records - In the implementation block
@property (assign,nonatomic) BOOL hasHasMusicSubscription; 
@property (assign,nonatomic) BOOL hasMusicSubscription;                        //@synthesize hasMusicSubscription=_hasMusicSubscription - In the implementation block
@property (nonatomic,retain) NSMutableArray * experimentalGroups;              //@synthesize experimentalGroups=_experimentalGroups - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetVersion; 
@property (nonatomic,retain) NSString * assetVersion;                          //@synthesize assetVersion=_assetVersion - In the implementation block
+(Class)recordsType;
+(Class)experimentalGroupsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)assetVersion;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)records;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)setAssetVersion:(NSString *)arg1 ;
-(void)addRecords:(id)arg1 ;
-(unsigned long long)recordsCount;
-(void)clearRecords;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(void)clearExperimentalGroups;
-(void)addExperimentalGroups:(id)arg1 ;
-(unsigned long long)experimentalGroupsCount;
-(id)experimentalGroupsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAssetVersion;
-(NSMutableArray *)experimentalGroups;
-(void)setExperimentalGroups:(NSMutableArray *)arg1 ;
-(void)setHasMusicSubscription:(BOOL)arg1 ;
-(void)setHasHasMusicSubscription:(BOOL)arg1 ;
-(BOOL)hasHasMusicSubscription;
-(BOOL)hasMusicSubscription;
@end

