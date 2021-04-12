/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PBBProtoCompanionTermsResponse : PBCodable <NSCopying> {

	NSString* _responseData;
	NSString* _userAgent;
	BOOL _isExistingAccountTerms;
	BOOL _termsAccepted;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) BOOL hasTermsAccepted; 
@property (assign,nonatomic) BOOL termsAccepted;                          //@synthesize termsAccepted=_termsAccepted - In the implementation block
@property (nonatomic,readonly) BOOL hasUserAgent; 
@property (nonatomic,retain) NSString * userAgent;                        //@synthesize userAgent=_userAgent - In the implementation block
@property (assign,nonatomic) BOOL hasIsExistingAccountTerms; 
@property (assign,nonatomic) BOOL isExistingAccountTerms;                 //@synthesize isExistingAccountTerms=_isExistingAccountTerms - In the implementation block
@property (nonatomic,readonly) BOOL hasResponseData; 
@property (nonatomic,retain) NSString * responseData;                     //@synthesize responseData=_responseData - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setResponseData:(NSString *)arg1 ;
-(id)description;
-(NSString *)responseData;
-(BOOL)termsAccepted;
-(void)setTermsAccepted:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSString *)userAgent;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasUserAgent;
-(BOOL)hasResponseData;
-(void)setHasTermsAccepted:(BOOL)arg1 ;
-(BOOL)hasTermsAccepted;
-(void)setIsExistingAccountTerms:(BOOL)arg1 ;
-(void)setHasIsExistingAccountTerms:(BOOL)arg1 ;
-(BOOL)hasIsExistingAccountTerms;
-(BOOL)isExistingAccountTerms;
@end

