/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSString* _personID;
	NSString* _token;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _supportsMultipleAddresses;
	struct {
		unsigned has_supportsMultipleAddresses : 1;
		unsigned read_personID : 1;
		unsigned read_token : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token; 
@property (nonatomic,readonly) BOOL hasPersonID; 
@property (nonatomic,retain) NSString * personID; 
@property (assign,nonatomic) BOOL hasSupportsMultipleAddresses; 
@property (assign,nonatomic) BOOL supportsMultipleAddresses; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasToken;
-(void)setToken:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)personID;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPersonID:(NSString *)arg1 ;
-(NSString *)token;
-(BOOL)hasPersonID;
-(void)setSupportsMultipleAddresses:(BOOL)arg1 ;
-(BOOL)supportsMultipleAddresses;
-(void)setHasSupportsMultipleAddresses:(BOOL)arg1 ;
-(BOOL)hasSupportsMultipleAddresses;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

