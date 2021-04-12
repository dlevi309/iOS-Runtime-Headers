/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPManifestURL : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _urlName;
	NSString* _urlValue;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_urlName : 1;
		unsigned read_urlValue : 1;
		unsigned wrote_urlName : 1;
		unsigned wrote_urlValue : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasUrlName; 
@property (nonatomic,retain) NSString * urlName; 
@property (nonatomic,readonly) BOOL hasUrlValue; 
@property (nonatomic,retain) NSString * urlValue; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)setUrlValue:(NSString *)arg1 ;
-(BOOL)hasUrlValue;
-(NSString *)urlValue;
-(void)readAll:(BOOL)arg1 ;
-(void)_readUrlName;
-(void)_readUrlValue;
-(NSString *)urlName;
-(void)setUrlName:(NSString *)arg1 ;
-(BOOL)hasUrlName;
@end

