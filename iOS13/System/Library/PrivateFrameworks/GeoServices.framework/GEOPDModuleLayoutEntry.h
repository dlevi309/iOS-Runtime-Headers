/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_applicationIds : 1;
		unsigned wrote_debugLayoutId : 1;
		unsigned wrote_modules : 1;
		unsigned wrote_platformType : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * applicationIds; 
@property (nonatomic,readonly) BOOL hasDebugLayoutId; 
@property (nonatomic,retain) NSString * debugLayoutId; 
@property (assign,nonatomic) BOOL hasPlatformType; 
@property (assign,nonatomic) int platformType; 
@property (nonatomic,retain) NSMutableArray * modules; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)applicationIdType;
+(Class)modulesType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setDebugLayoutId:(NSString *)arg1 ;
-(void)addModules:(id)arg1 ;
-(NSString *)debugLayoutId;
-(int)platformType;
-(NSMutableArray *)applicationIds;
-(NSMutableArray *)modules;
-(BOOL)hasPlatformType;
-(void)_readApplicationIds;
-(void)_addNoFlagsApplicationId:(id)arg1 ;
-(void)_readDebugLayoutId;
-(void)_readModules;
-(void)_addNoFlagsModules:(id)arg1 ;
-(unsigned long long)applicationIdsCount;
-(void)clearApplicationIds;
-(id)applicationIdAtIndex:(unsigned long long)arg1 ;
-(void)addApplicationId:(id)arg1 ;
-(unsigned long long)modulesCount;
-(void)clearModules;
-(id)modulesAtIndex:(unsigned long long)arg1 ;
-(void)setApplicationIds:(NSMutableArray *)arg1 ;
-(BOOL)hasDebugLayoutId;
-(void)setPlatformType:(int)arg1 ;
-(void)setHasPlatformType:(BOOL)arg1 ;
-(id)platformTypeAsString:(int)arg1 ;
-(int)StringAsPlatformType:(id)arg1 ;
-(void)setModules:(NSMutableArray *)arg1 ;
@end

