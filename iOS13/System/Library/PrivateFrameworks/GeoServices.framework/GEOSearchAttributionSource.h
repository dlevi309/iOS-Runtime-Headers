/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOSearchAttributionSource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE1* _attributionRequirements;
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
		unsigned read_appAdamID : 1;
		unsigned read_attributionApps : 1;
		unsigned read_localizedAttributions : 1;
		unsigned read_sourceIdentifier : 1;
		unsigned read_supportedComponentActions : 1;
		unsigned read_webBaseActionURL : 1;
		unsigned wrote_attributionRequirements : 1;
		unsigned wrote_appAdamID : 1;
		unsigned wrote_attributionApps : 1;
		unsigned wrote_localizedAttributions : 1;
		unsigned wrote_sourceIdentifier : 1;
		unsigned wrote_supportedComponentActions : 1;
		unsigned wrote_webBaseActionURL : 1;
		unsigned wrote_sourceVersion : 1;
		unsigned wrote_enforceAppStore : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)localizedAttributionType;
+(Class)attributionAppsType;
+(Class)supportedComponentActionsType;
-(id)init;
-(void)dealloc;
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
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)sourceVersion;
-(void)setSourceVersion:(unsigned)arg1 ;
-(NSMutableArray *)attributionApps;
-(NSString *)appAdamID;
-(void)_readSourceIdentifier;
-(void)_readLocalizedAttributions;
-(void)_addNoFlagsLocalizedAttribution:(id)arg1 ;
-(void)_readAttributionRequirements;
-(void)_addNoFlagsAttributionRequirements:(int)arg1 ;
-(void)_readAttributionApps;
-(void)_addNoFlagsAttributionApps:(id)arg1 ;
-(void)_readWebBaseActionURL;
-(void)_readSupportedComponentActions;
-(void)_addNoFlagsSupportedComponentActions:(id)arg1 ;
-(void)_readAppAdamID;
-(NSString *)webBaseActionURL;
-(unsigned long long)localizedAttributionsCount;
-(void)clearLocalizedAttributions;
-(id)localizedAttributionAtIndex:(unsigned long long)arg1 ;
-(void)addLocalizedAttribution:(id)arg1 ;
-(unsigned long long)attributionRequirementsCount;
-(void)clearAttributionRequirements;
-(int)attributionRequirementsAtIndex:(unsigned long long)arg1 ;
-(void)addAttributionRequirements:(int)arg1 ;
-(unsigned long long)attributionAppsCount;
-(void)clearAttributionApps;
-(id)attributionAppsAtIndex:(unsigned long long)arg1 ;
-(void)addAttributionApps:(id)arg1 ;
-(void)setWebBaseActionURL:(NSString *)arg1 ;
-(unsigned long long)supportedComponentActionsCount;
-(void)clearSupportedComponentActions;
-(id)supportedComponentActionsAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedComponentActions:(id)arg1 ;
-(void)setAppAdamID:(NSString *)arg1 ;
-(NSMutableArray *)localizedAttributions;
-(void)setLocalizedAttributions:(NSMutableArray *)arg1 ;
-(int*)attributionRequirements;
-(void)setAttributionRequirements:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)attributionRequirementsAsString:(int)arg1 ;
-(int)StringAsAttributionRequirements:(id)arg1 ;
-(void)setAttributionApps:(NSMutableArray *)arg1 ;
-(BOOL)hasWebBaseActionURL;
-(NSMutableArray *)supportedComponentActions;
-(void)setSupportedComponentActions:(NSMutableArray *)arg1 ;
-(BOOL)enforceAppStore;
-(void)setEnforceAppStore:(BOOL)arg1 ;
-(void)setHasEnforceAppStore:(BOOL)arg1 ;
-(BOOL)hasEnforceAppStore;
-(BOOL)hasAppAdamID;
-(id)bestLocalizedAttribution;
-(BOOL)supportsAction:(int)arg1 forComponent:(int)arg2 ;
-(BOOL)canLocallyHandleAction:(int)arg1 forComponent:(int)arg2 ;
@end

