/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MSPMediaSyncHeader : PBCodable <NSCopying> {

	int _syncType;
	int _totalPackages;
	SCD_Struct_MI1 _has;

}

@property (assign,nonatomic) BOOL hasTotalPackages; 
@property (assign,nonatomic) int totalPackages;                  //@synthesize totalPackages=_totalPackages - In the implementation block
@property (assign,nonatomic) BOOL hasSyncType; 
@property (assign,nonatomic) int syncType;                       //@synthesize syncType=_syncType - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(int)syncType;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSyncType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)totalPackages;
-(void)setTotalPackages:(int)arg1 ;
-(void)setHasTotalPackages:(BOOL)arg1 ;
-(BOOL)hasTotalPackages;
-(void)setHasSyncType:(BOOL)arg1 ;
-(BOOL)hasSyncType;
-(id)syncTypeAsString:(int)arg1 ;
-(int)StringAsSyncType:(id)arg1 ;
@end

