/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineHeroAppSuggestionInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _bundleId;
	int _lat;
	int _lon;
	NSString* _suggestionId;
	BOOL _installed;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionId; 
@property (nonatomic,retain) NSString * suggestionId;                   //@synthesize suggestionId=_suggestionId - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                       //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasLat; 
@property (assign,nonatomic) int lat;                                   //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) BOOL hasLon; 
@property (assign,nonatomic) int lon;                                   //@synthesize lon=_lon - In the implementation block
@property (assign,nonatomic) BOOL hasInstalled; 
@property (assign,nonatomic) BOOL installed;                            //@synthesize installed=_installed - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)lat;
-(void)setLat:(int)arg1 ;
-(BOOL)hasLat;
-(BOOL)hasBundleId;
-(BOOL)installed;
-(void)setInstalled:(BOOL)arg1 ;
-(void)setHasInstalled:(BOOL)arg1 ;
-(BOOL)hasInstalled;
-(void)setSuggestionId:(NSString *)arg1 ;
-(BOOL)hasSuggestionId;
-(NSString *)suggestionId;
-(void)setHasLat:(BOOL)arg1 ;
-(void)setLon:(int)arg1 ;
-(void)setHasLon:(BOOL)arg1 ;
-(BOOL)hasLon;
-(int)lon;
@end

