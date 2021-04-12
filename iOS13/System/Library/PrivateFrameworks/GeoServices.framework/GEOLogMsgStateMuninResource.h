/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgStateMuninResource : PBCodable <NSCopying> {

	NSString* _assetBucket;
	unsigned _levelOfDetail;
	struct {
		unsigned has_levelOfDetail : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAssetBucket; 
@property (nonatomic,retain) NSString * assetBucket; 
@property (assign,nonatomic) BOOL hasLevelOfDetail; 
@property (assign,nonatomic) unsigned levelOfDetail; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)assetBucket;
-(void)setAssetBucket:(NSString *)arg1 ;
-(BOOL)hasAssetBucket;
-(unsigned)levelOfDetail;
-(void)setLevelOfDetail:(unsigned)arg1 ;
-(void)setHasLevelOfDetail:(BOOL)arg1 ;
-(BOOL)hasLevelOfDetail;
@end

