/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _environmentDisplayName;
	NSString* _environmentReleaseName;
	NSMutableArray* _urls;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_environmentDisplayName : 1;
		unsigned read_environmentReleaseName : 1;
		unsigned read_urls : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEnvironmentDisplayName; 
@property (nonatomic,retain) NSString * environmentDisplayName; 
@property (nonatomic,readonly) BOOL hasEnvironmentReleaseName; 
@property (nonatomic,retain) NSString * environmentReleaseName; 
@property (nonatomic,retain) NSMutableArray * urls; 
+(Class)urlType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)urls;
-(void)readAll:(BOOL)arg1 ;
-(void)setUrls:(NSMutableArray *)arg1 ;
-(id)init;
-(unsigned long long)urlsCount;
-(id)urlAtIndex:(unsigned long long)arg1 ;
-(id)jsonRepresentation;
-(NSString *)environmentDisplayName;
-(NSString *)environmentReleaseName;
-(void)setEnvironmentDisplayName:(NSString *)arg1 ;
-(void)setEnvironmentReleaseName:(NSString *)arg1 ;
-(BOOL)hasEnvironmentDisplayName;
-(BOOL)hasEnvironmentReleaseName;
-(void)mergeFrom:(id)arg1 ;
-(void)addUrl:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearUrls;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

