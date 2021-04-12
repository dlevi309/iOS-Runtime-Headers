/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(int)lat;
-(int)lon;
-(void)setBundleId:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(NSString *)bundleId;
-(BOOL)hasLat;
-(BOOL)hasBundleId;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)installed;
-(id)description;
-(void)setInstalled:(BOOL)arg1 ;
-(BOOL)hasLon;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)suggestionId;
-(void)setLat:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSuggestionId:(NSString *)arg1 ;
-(void)setHasInstalled:(BOOL)arg1 ;
-(BOOL)hasInstalled;
-(BOOL)hasSuggestionId;
-(void)setHasLat:(BOOL)arg1 ;
-(void)setLon:(int)arg1 ;
-(void)setHasLon:(BOOL)arg1 ;
@end

