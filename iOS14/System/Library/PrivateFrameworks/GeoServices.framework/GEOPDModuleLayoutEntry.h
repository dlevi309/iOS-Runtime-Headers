/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDModuleLayoutEntry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _applicationIds;
	NSString* _debugLayoutId;
	NSMutableArray* _modules;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _platformType;
	struct {
		unsigned has_platformType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_applicationIds : 1;
		unsigned read_debugLayoutId : 1;
		unsigned read_modules : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * applicationIds; 
@property (nonatomic,readonly) BOOL hasDebugLayoutId; 
@property (nonatomic,retain) NSString * debugLayoutId; 
@property (assign,nonatomic) BOOL hasPlatformType; 
@property (assign,nonatomic) int platformType; 
@property (nonatomic,retain) NSMutableArray * modules; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)modulesType;
+(Class)applicationIdType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)modules;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)modulesCount;
-(void)addApplicationId:(id)arg1 ;
-(void)setPlatformType:(int)arg1 ;
-(unsigned long long)applicationIdsCount;
-(void)clearApplicationIds;
-(id)applicationIdAtIndex:(unsigned long long)arg1 ;
-(void)clearModules;
-(id)modulesAtIndex:(unsigned long long)arg1 ;
-(void)setApplicationIds:(NSMutableArray *)arg1 ;
-(BOOL)hasDebugLayoutId;
-(void)setHasPlatformType:(BOOL)arg1 ;
-(id)platformTypeAsString:(int)arg1 ;
-(int)StringAsPlatformType:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setModules:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDebugLayoutId:(NSString *)arg1 ;
-(void)addModules:(id)arg1 ;
-(NSString *)debugLayoutId;
-(int)platformType;
-(NSMutableArray *)applicationIds;
-(BOOL)hasPlatformType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

