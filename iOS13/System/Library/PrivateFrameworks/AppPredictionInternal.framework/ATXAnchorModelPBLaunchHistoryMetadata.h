/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXAnchorModelPBLaunchHistoryMetadata : PBCodable <NSCopying> {

	unsigned _launchesInLast14Days;
	unsigned _launchesInLast28Days;
	unsigned _launchesInLast2Hours;
	unsigned _launchesInLast7Days;
	SCD_Struct_AT1 _has;

}

@property (assign,nonatomic) BOOL hasLaunchesInLast2Hours; 
@property (assign,nonatomic) unsigned launchesInLast2Hours;              //@synthesize launchesInLast2Hours=_launchesInLast2Hours - In the implementation block
@property (assign,nonatomic) BOOL hasLaunchesInLast7Days; 
@property (assign,nonatomic) unsigned launchesInLast7Days;               //@synthesize launchesInLast7Days=_launchesInLast7Days - In the implementation block
@property (assign,nonatomic) BOOL hasLaunchesInLast14Days; 
@property (assign,nonatomic) unsigned launchesInLast14Days;              //@synthesize launchesInLast14Days=_launchesInLast14Days - In the implementation block
@property (assign,nonatomic) BOOL hasLaunchesInLast28Days; 
@property (assign,nonatomic) unsigned launchesInLast28Days;              //@synthesize launchesInLast28Days=_launchesInLast28Days - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLaunchesInLast2Hours:(unsigned)arg1 ;
-(void)setHasLaunchesInLast2Hours:(BOOL)arg1 ;
-(BOOL)hasLaunchesInLast2Hours;
-(void)setLaunchesInLast7Days:(unsigned)arg1 ;
-(void)setHasLaunchesInLast7Days:(BOOL)arg1 ;
-(BOOL)hasLaunchesInLast7Days;
-(void)setLaunchesInLast14Days:(unsigned)arg1 ;
-(void)setHasLaunchesInLast14Days:(BOOL)arg1 ;
-(BOOL)hasLaunchesInLast14Days;
-(void)setLaunchesInLast28Days:(unsigned)arg1 ;
-(void)setHasLaunchesInLast28Days:(BOOL)arg1 ;
-(BOOL)hasLaunchesInLast28Days;
-(unsigned)launchesInLast2Hours;
-(unsigned)launchesInLast7Days;
-(unsigned)launchesInLast14Days;
-(unsigned)launchesInLast28Days;
@end

