/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_environmentDisplayName : 1;
		unsigned wrote_environmentReleaseName : 1;
		unsigned wrote_urls : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEnvironmentDisplayName; 
@property (nonatomic,retain) NSString * environmentDisplayName; 
@property (nonatomic,readonly) BOOL hasEnvironmentReleaseName; 
@property (nonatomic,retain) NSString * environmentReleaseName; 
@property (nonatomic,retain) NSMutableArray * urls; 
+(BOOL)isValid:(id)arg1 ;
+(Class)urlType;
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
-(void)_readEnvironmentDisplayName;
-(void)_readEnvironmentReleaseName;
-(void)_readUrls;
-(void)_addNoFlagsUrl:(id)arg1 ;
-(NSString *)environmentDisplayName;
-(NSString *)environmentReleaseName;
-(void)setEnvironmentDisplayName:(NSString *)arg1 ;
-(void)setEnvironmentReleaseName:(NSString *)arg1 ;
-(unsigned long long)urlsCount;
-(void)clearUrls;
-(id)urlAtIndex:(unsigned long long)arg1 ;
-(void)addUrl:(id)arg1 ;
-(BOOL)hasEnvironmentDisplayName;
-(BOOL)hasEnvironmentReleaseName;
-(NSMutableArray *)urls;
-(void)setUrls:(NSMutableArray *)arg1 ;
@end

