/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)expirationDate;
-(void)setExpirationDate:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)requestType;
-(BOOL)hasExpirationDate;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(BOOL)hasBundleId;
-(BOOL)isTest;
-(void)setBaseUrl:(NSString *)arg1 ;
-(void)setIsTest:(BOOL)arg1 ;
-(void)setHasIsTest:(BOOL)arg1 ;
-(BOOL)hasIsTest;
-(BOOL)hasBaseUrl;
-(NSString *)baseUrl;
@end

