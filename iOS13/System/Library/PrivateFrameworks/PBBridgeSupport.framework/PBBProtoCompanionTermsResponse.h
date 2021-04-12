/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)responseData;
-(void)setResponseData:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(BOOL)termsAccepted;
-(void)setTermsAccepted:(BOOL)arg1 ;
-(BOOL)hasUserAgent;
-(void)setHasTermsAccepted:(BOOL)arg1 ;
-(BOOL)hasTermsAccepted;
-(void)setIsExistingAccountTerms:(BOOL)arg1 ;
-(void)setHasIsExistingAccountTerms:(BOOL)arg1 ;
-(BOOL)hasIsExistingAccountTerms;
-(BOOL)hasResponseData;
-(BOOL)isExistingAccountTerms;
@end

