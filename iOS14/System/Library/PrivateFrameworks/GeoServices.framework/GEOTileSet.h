/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOTileSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _baseURL;
	NSMutableArray* _countryRegionAllowlists;
	NSMutableArray* _deviceSKUAllowlists;
	NSString* _localizationURL;
	NSString* _multiTileURL;
	NSMutableArray* _supportedLanguages;
	NSMutableArray* _validVersions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _alternativeMultipathTCPPort;
	int _checksumType;
	unsigned _dataSet;
	int _requestStyle;
	int _scale;
	int _size;
	int _style;
	int _updateBehavior;
	BOOL _multiTileURLUsesStatusCodes;
	BOOL _supportsMultipathTCP;
	BOOL _useAuthProxy;
	struct {
		unsigned has_alternativeMultipathTCPPort : 1;
		unsigned has_checksumType : 1;
		unsigned has_dataSet : 1;
		unsigned has_requestStyle : 1;
		unsigned has_updateBehavior : 1;
		unsigned has_multiTileURLUsesStatusCodes : 1;
		unsigned has_supportsMultipathTCP : 1;
		unsigned has_useAuthProxy : 1;
		unsigned read_unknownFields : 1;
		unsigned read_baseURL : 1;
		unsigned read_countryRegionAllowlists : 1;
		unsigned read_deviceSKUAllowlists : 1;
		unsigned read_localizationURL : 1;
		unsigned read_multiTileURL : 1;
		unsigned read_supportedLanguages : 1;
		unsigned read_validVersions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBaseURL; 
@property (nonatomic,retain) NSString * baseURL; 
@property (nonatomic,readonly) BOOL hasMultiTileURL; 
@property (nonatomic,retain) NSString * multiTileURL; 
@property (assign,nonatomic) int style; 
@property (nonatomic,retain) NSMutableArray * validVersions; 
@property (assign,nonatomic) int scale; 
@property (assign,nonatomic) int size; 
@property (nonatomic,readonly) BOOL hasLocalizationURL; 
@property (nonatomic,retain) NSString * localizationURL; 
@property (nonatomic,retain) NSMutableArray * supportedLanguages; 
@property (assign,nonatomic) BOOL hasMultiTileURLUsesStatusCodes; 
@property (assign,nonatomic) BOOL multiTileURLUsesStatusCodes; 
@property (assign,nonatomic) BOOL hasUpdateBehavior; 
@property (assign,nonatomic) int updateBehavior; 
@property (nonatomic,retain) NSMutableArray * countryRegionAllowlists; 
@property (assign,nonatomic) BOOL hasChecksumType; 
@property (assign,nonatomic) int checksumType; 
@property (assign,nonatomic) BOOL hasDataSet; 
@property (assign,nonatomic) unsigned dataSet; 
@property (assign,nonatomic) BOOL hasRequestStyle; 
@property (assign,nonatomic) int requestStyle; 
@property (assign,nonatomic) BOOL hasUseAuthProxy; 
@property (assign,nonatomic) BOOL useAuthProxy; 
@property (assign,nonatomic) BOOL hasSupportsMultipathTCP; 
@property (assign,nonatomic) BOOL supportsMultipathTCP; 
@property (assign,nonatomic) BOOL hasAlternativeMultipathTCPPort; 
@property (assign,nonatomic) unsigned alternativeMultipathTCPPort; 
@property (nonatomic,retain) NSMutableArray * deviceSKUAllowlists; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)supportedLanguageType;
+(Class)countryRegionAllowlistType;
+(Class)deviceSKUAllowlistType;
+(BOOL)isValid:(id)arg1 ;
+(Class)validVersionType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setRequestStyle:(int)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasLocalizationURL;
-(void)clearDeviceSKUAllowlists;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)baseURL;
-(void)setAlternativeMultipathTCPPort:(unsigned)arg1 ;
-(id)init;
-(int)StringAsScale:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setHasChecksumType:(BOOL)arg1 ;
-(id)styleAsString:(int)arg1 ;
-(unsigned long long)deviceSKUAllowlistsCount;
-(int)checksumType;
-(int)size;
-(BOOL)hasBaseURL;
-(void)setDataSet:(unsigned)arg1 ;
-(id)sizeAsString:(int)arg1 ;
-(int)scale;
-(void)setHasRequestStyle:(BOOL)arg1 ;
-(BOOL)useAuthProxy;
-(void)setHasAlternativeMultipathTCPPort:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setLocalizationURL:(NSString *)arg1 ;
-(void)setDeviceSKUAllowlists:(NSMutableArray *)arg1 ;
-(void)addDeviceSKUAllowlist:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)StringAsChecksumType:(id)arg1 ;
-(void)setHasUpdateBehavior:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasSupportsMultipathTCP;
-(id)deviceSKUAllowlistAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAlternativeMultipathTCPPort;
-(void)setUseAuthProxy:(BOOL)arg1 ;
-(void)addCountryRegionAllowlist:(id)arg1 ;
-(id)scaleAsString:(int)arg1 ;
-(id)description;
-(void)setValidVersions:(NSMutableArray *)arg1 ;
-(int)StringAsUpdateBehavior:(id)arg1 ;
-(void)clearSupportedLanguages;
-(int)StringAsRequestStyle:(id)arg1 ;
-(void)setMultiTileURLUsesStatusCodes:(BOOL)arg1 ;
-(id)requestStyleAsString:(int)arg1 ;
-(void)setUpdateBehavior:(int)arg1 ;
-(void)clearCountryRegionAllowlists;
-(BOOL)supportsMultipathTCP;
-(void)setHasDataSet:(BOOL)arg1 ;
-(int)requestStyle;
-(BOOL)hasMultiTileURL;
-(void)setSupportsMultipathTCP:(BOOL)arg1 ;
-(unsigned long long)supportedLanguagesCount;
-(void)setScale:(int)arg1 ;
-(void)setMultiTileURL:(NSString *)arg1 ;
-(NSMutableArray *)deviceSKUAllowlists;
-(NSString *)multiTileURL;
-(unsigned long long)countryRegionAllowlistsCount;
-(unsigned long long)validVersionsCount;
-(BOOL)hasDataSet;
-(unsigned long long)hash;
-(unsigned)dataSet;
-(unsigned)alternativeMultipathTCPPort;
-(BOOL)hasUseAuthProxy;
-(NSString *)localizationURL;
-(int)StringAsSize:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCountryRegionAllowlists:(NSMutableArray *)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(BOOL)hasRequestStyle;
-(id)updateBehaviorAsString:(int)arg1 ;
-(BOOL)hasUpdateBehavior;
-(BOOL)hasMultiTileURLUsesStatusCodes;
-(void)setStyle:(int)arg1 ;
-(int)updateBehavior;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addSupportedLanguage:(id)arg1 ;
-(void)setHasUseAuthProxy:(BOOL)arg1 ;
-(NSMutableArray *)supportedLanguages;
-(id)countryRegionAllowlistAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasChecksumType;
-(NSMutableArray *)countryRegionAllowlists;
-(void)addValidVersion:(id)arg1 ;
-(NSMutableArray *)validVersions;
-(void)setSupportedLanguages:(NSMutableArray *)arg1 ;
-(void)setChecksumType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasSupportsMultipathTCP:(BOOL)arg1 ;
-(BOOL)multiTileURLUsesStatusCodes;
-(void)setBaseURL:(NSString *)arg1 ;
-(int)style;
-(void)setHasMultiTileURLUsesStatusCodes:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)supportedLanguageAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)checksumTypeAsString:(int)arg1 ;
-(void)clearValidVersions;
-(id)validVersionAtIndex:(unsigned long long)arg1 ;
@end

