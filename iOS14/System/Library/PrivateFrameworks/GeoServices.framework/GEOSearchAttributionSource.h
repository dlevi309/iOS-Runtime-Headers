/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOSearchAttributionSource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _attributionRequirements;
	SCD_Struct_GE90* _suppressAttributionLogos;
	NSString* _appAdamID;
	NSMutableArray* _attributionApps;
	NSMutableArray* _localizedAttributions;
	NSString* _sourceIdentifier;
	NSMutableArray* _supportedComponentActions;
	NSString* _webBaseActionURL;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _sourceVersion;
	BOOL _enforceAppStore;
	struct {
		unsigned has_enforceAppStore : 1;
		unsigned read_attributionRequirements : 1;
		unsigned read_suppressAttributionLogos : 1;
		unsigned read_appAdamID : 1;
		unsigned read_attributionApps : 1;
		unsigned read_localizedAttributions : 1;
		unsigned read_sourceIdentifier : 1;
		unsigned read_supportedComponentActions : 1;
		unsigned read_webBaseActionURL : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (assign,nonatomic) unsigned sourceVersion; 
@property (nonatomic,retain) NSMutableArray * localizedAttributions; 
@property (nonatomic,readonly) unsigned long long attributionRequirementsCount; 
@property (nonatomic,readonly) int* attributionRequirements; 
@property (nonatomic,retain) NSMutableArray * attributionApps; 
@property (nonatomic,readonly) BOOL hasWebBaseActionURL; 
@property (nonatomic,retain) NSString * webBaseActionURL; 
@property (nonatomic,retain) NSMutableArray * supportedComponentActions; 
@property (assign,nonatomic) BOOL hasEnforceAppStore; 
@property (assign,nonatomic) BOOL enforceAppStore; 
@property (nonatomic,readonly) BOOL hasAppAdamID; 
@property (nonatomic,retain) NSString * appAdamID; 
@property (nonatomic,readonly) unsigned long long suppressAttributionLogosCount; 
@property (nonatomic,readonly) int* suppressAttributionLogos; 
+(Class)localizedAttributionType;
+(Class)attributionAppsType;
+(Class)supportedComponentActionsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(id)attributionRequirementsAsString:(int)arg1 ;
-(BOOL)supportsAction:(int)arg1 forComponent:(int)arg2 ;
-(int*)suppressAttributionLogos;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(NSMutableArray *)supportedComponentActions;
-(id)jsonRepresentation;
-(void)addSuppressAttributionLogos:(int)arg1 ;
-(void)clearAttributionApps;
-(int)attributionRequirementsAtIndex:(unsigned long long)arg1 ;
-(BOOL)canSuppressActionForComponent:(int)arg1 ;
-(BOOL)hasEnforceAppStore;
-(void)setSuppressAttributionLogos:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)localizedAttributionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)attributionApps;
-(unsigned)sourceVersion;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAppAdamID;
-(unsigned long long)suppressAttributionLogosCount;
-(void)setSourceVersion:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setAttributionApps:(NSMutableArray *)arg1 ;
-(void)addAttributionRequirements:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addLocalizedAttribution:(id)arg1 ;
-(void)setAttributionRequirements:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasWebBaseActionURL;
-(unsigned long long)attributionRequirementsCount;
-(BOOL)canLocallyHandleAction:(int)arg1 forComponent:(int)arg2 ;
-(void)clearSupportedComponentActions;
-(void)setWebBaseActionURL:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)localizedAttributionsCount;
-(void)addSupportedComponentActions:(id)arg1 ;
-(id)attributionAppsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributionAppsCount;
-(int*)attributionRequirements;
-(void)clearSuppressAttributionLogos;
-(id)supportedComponentActionsAtIndex:(unsigned long long)arg1 ;
-(void)clearAttributionRequirements;
-(unsigned long long)hash;
-(id)suppressAttributionLogosAsString:(int)arg1 ;
-(BOOL)enforceAppStore;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsAttributionRequirements:(id)arg1 ;
-(unsigned long long)supportedComponentActionsCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasEnforceAppStore:(BOOL)arg1 ;
-(void)addAttributionApps:(id)arg1 ;
-(NSString *)appAdamID;
-(NSString *)webBaseActionURL;
-(NSMutableArray *)localizedAttributions;
-(int)StringAsSuppressAttributionLogos:(id)arg1 ;
-(void)clearLocalizedAttributions;
-(void)setLocalizedAttributions:(NSMutableArray *)arg1 ;
-(void)setAppAdamID:(NSString *)arg1 ;
-(int)suppressAttributionLogosAtIndex:(unsigned long long)arg1 ;
-(id)bestLocalizedAttribution;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnforceAppStore:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSupportedComponentActions:(NSMutableArray *)arg1 ;
-(NSString *)sourceIdentifier;
@end

