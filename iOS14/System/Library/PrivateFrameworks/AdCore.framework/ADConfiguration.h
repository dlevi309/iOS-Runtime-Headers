/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ADConfiguration : PBCodable <NSCopying> {

	double _expirationDate;
	NSString* _baseUrl;
	NSString* _bundleId;
	int _requestType;
	BOOL _isTest;
	SCD_Struct_AD2 _has;

}

@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                     //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) BOOL hasIsTest; 
@property (assign,nonatomic) BOOL isTest;                         //@synthesize isTest=_isTest - In the implementation block
@property (nonatomic,readonly) BOOL hasBaseUrl; 
@property (nonatomic,retain) NSString * baseUrl;                  //@synthesize baseUrl=_baseUrl - In the implementation block
@property (assign,nonatomic) BOOL hasExpirationDate; 
@property (assign,nonatomic) double expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
-(BOOL)hasRequestType;
-(id)dictionaryRepresentation;
-(void)setHasIsTest:(BOOL)arg1 ;
-(BOOL)hasIsTest;
-(BOOL)isTest;
-(void)setRequestType:(int)arg1 ;
-(void)setExpirationDate:(double)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(void)setIsTest:(BOOL)arg1 ;
-(BOOL)hasExpirationDate;
-(int)requestType;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(BOOL)hasBundleId;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(id)description;
-(void)setBaseUrl:(NSString *)arg1 ;
-(double)expirationDate;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)baseUrl;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasBaseUrl;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

