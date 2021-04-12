/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOPublisherAttributionSource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _appAdamID;
	NSMutableArray* _localizedAttributions;
	NSString* _websiteURL;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_appAdamID : 1;
		unsigned read_localizedAttributions : 1;
		unsigned read_websiteURL : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * localizedAttributions; 
@property (nonatomic,readonly) BOOL hasAppAdamID; 
@property (nonatomic,retain) NSString * appAdamID; 
@property (nonatomic,readonly) BOOL hasWebsiteURL; 
@property (nonatomic,retain) NSString * websiteURL; 
+(Class)localizedAttributionType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(id)localizedAttributionAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAppAdamID;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addLocalizedAttribution:(id)arg1 ;
-(id)description;
-(unsigned long long)localizedAttributionsCount;
-(NSString *)websiteURL;
-(void)setWebsiteURL:(NSString *)arg1 ;
-(BOOL)hasWebsiteURL;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)appAdamID;
-(NSMutableArray *)localizedAttributions;
-(void)clearLocalizedAttributions;
-(void)setLocalizedAttributions:(NSMutableArray *)arg1 ;
-(void)setAppAdamID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

