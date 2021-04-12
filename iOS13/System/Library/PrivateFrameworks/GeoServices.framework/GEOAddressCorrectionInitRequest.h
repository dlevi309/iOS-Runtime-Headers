/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_personID : 1;
		unsigned wrote_token : 1;
		unsigned wrote_supportsMultipleAddresses : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token; 
@property (nonatomic,readonly) BOOL hasPersonID; 
@property (nonatomic,retain) NSString * personID; 
@property (assign,nonatomic) BOOL hasSupportsMultipleAddresses; 
@property (assign,nonatomic) BOOL supportsMultipleAddresses; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setToken:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasToken;
-(void)_readToken;
-(void)_readPersonID;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(BOOL)hasPersonID;
-(BOOL)supportsMultipleAddresses;
-(void)setSupportsMultipleAddresses:(BOOL)arg1 ;
-(void)setHasSupportsMultipleAddresses:(BOOL)arg1 ;
-(BOOL)hasSupportsMultipleAddresses;
@end

