/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDMerchantInformation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _merchantAdditionalData;
	NSString* _merchantAddress;
	NSString* _merchantCanl;
	NSString* _merchantCity;
	NSString* _merchantCountryCode;
	NSString* _merchantDoingBusinessAsName;
	NSString* _merchantEnhancedName;
	NSString* _merchantId;
	NSString* _merchantRawAddress;
	NSString* _merchantRawCity;
	NSString* _merchantRawState;
	NSString* _merchantState;
	NSString* _merchantType;
	NSString* _merchantZip;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _merchantCleanConfidenceLevel;
	struct {
		unsigned has_merchantCleanConfidenceLevel : 1;
		unsigned read_unknownFields : 1;
		unsigned read_merchantAdditionalData : 1;
		unsigned read_merchantAddress : 1;
		unsigned read_merchantCanl : 1;
		unsigned read_merchantCity : 1;
		unsigned read_merchantCountryCode : 1;
		unsigned read_merchantDoingBusinessAsName : 1;
		unsigned read_merchantEnhancedName : 1;
		unsigned read_merchantId : 1;
		unsigned read_merchantRawAddress : 1;
		unsigned read_merchantRawCity : 1;
		unsigned read_merchantRawState : 1;
		unsigned read_merchantState : 1;
		unsigned read_merchantType : 1;
		unsigned read_merchantZip : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMerchantId; 
@property (nonatomic,retain) NSString * merchantId; 
@property (nonatomic,readonly) BOOL hasMerchantDoingBusinessAsName; 
@property (nonatomic,retain) NSString * merchantDoingBusinessAsName; 
@property (nonatomic,readonly) BOOL hasMerchantEnhancedName; 
@property (nonatomic,retain) NSString * merchantEnhancedName; 
@property (nonatomic,readonly) BOOL hasMerchantCity; 
@property (nonatomic,retain) NSString * merchantCity; 
@property (nonatomic,readonly) BOOL hasMerchantRawCity; 
@property (nonatomic,retain) NSString * merchantRawCity; 
@property (nonatomic,readonly) BOOL hasMerchantState; 
@property (nonatomic,retain) NSString * merchantState; 
@property (nonatomic,readonly) BOOL hasMerchantRawState; 
@property (nonatomic,retain) NSString * merchantRawState; 
@property (nonatomic,readonly) BOOL hasMerchantZip; 
@property (nonatomic,retain) NSString * merchantZip; 
@property (nonatomic,readonly) BOOL hasMerchantAddress; 
@property (nonatomic,retain) NSString * merchantAddress; 
@property (nonatomic,readonly) BOOL hasMerchantRawAddress; 
@property (nonatomic,retain) NSString * merchantRawAddress; 
@property (nonatomic,readonly) BOOL hasMerchantCountryCode; 
@property (nonatomic,retain) NSString * merchantCountryCode; 
@property (nonatomic,readonly) BOOL hasMerchantType; 
@property (nonatomic,retain) NSString * merchantType; 
@property (assign,nonatomic) BOOL hasMerchantCleanConfidenceLevel; 
@property (assign,nonatomic) int merchantCleanConfidenceLevel; 
@property (nonatomic,readonly) BOOL hasMerchantAdditionalData; 
@property (nonatomic,retain) NSString * merchantAdditionalData; 
@property (nonatomic,readonly) BOOL hasMerchantCanl; 
@property (nonatomic,retain) NSString * merchantCanl; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)merchantId;
-(NSString *)merchantCity;
-(NSString *)merchantDoingBusinessAsName;
-(NSString *)merchantEnhancedName;
-(NSString *)merchantRawCity;
-(NSString *)merchantState;
-(NSString *)merchantRawState;
-(NSString *)merchantZip;
-(NSString *)merchantAddress;
-(NSString *)merchantRawAddress;
-(NSString *)merchantCountryCode;
-(NSString *)merchantType;
-(NSString *)merchantAdditionalData;
-(NSString *)merchantCanl;
-(void)setMerchantId:(NSString *)arg1 ;
-(void)setMerchantCity:(NSString *)arg1 ;
-(void)setMerchantDoingBusinessAsName:(NSString *)arg1 ;
-(void)setMerchantEnhancedName:(NSString *)arg1 ;
-(void)setMerchantRawCity:(NSString *)arg1 ;
-(void)setMerchantState:(NSString *)arg1 ;
-(void)setMerchantRawState:(NSString *)arg1 ;
-(void)setMerchantZip:(NSString *)arg1 ;
-(void)setMerchantAddress:(NSString *)arg1 ;
-(void)setMerchantRawAddress:(NSString *)arg1 ;
-(void)setMerchantCountryCode:(NSString *)arg1 ;
-(void)setMerchantType:(NSString *)arg1 ;
-(void)setMerchantCanl:(NSString *)arg1 ;
-(void)setMerchantCleanConfidenceLevel:(int)arg1 ;
-(void)setMerchantAdditionalData:(NSString *)arg1 ;
-(BOOL)hasMerchantId;
-(BOOL)hasMerchantDoingBusinessAsName;
-(BOOL)hasMerchantEnhancedName;
-(BOOL)hasMerchantCity;
-(BOOL)hasMerchantState;
-(BOOL)hasMerchantRawCity;
-(BOOL)hasMerchantRawState;
-(BOOL)hasMerchantZip;
-(BOOL)hasMerchantAddress;
-(BOOL)hasMerchantRawAddress;
-(BOOL)hasMerchantCountryCode;
-(BOOL)hasMerchantType;
-(BOOL)hasMerchantAdditionalData;
-(int)merchantCleanConfidenceLevel;
-(void)setHasMerchantCleanConfidenceLevel:(BOOL)arg1 ;
-(BOOL)hasMerchantCanl;
-(BOOL)hasMerchantCleanConfidenceLevel;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

