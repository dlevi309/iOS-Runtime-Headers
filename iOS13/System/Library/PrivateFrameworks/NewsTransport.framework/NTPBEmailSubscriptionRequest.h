/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying> {

	long long _dsId;
	NSString* _languageCode;
	NSString* _userStorefrontId;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasDsId; 
@property (assign,nonatomic) long long dsId;                           //@synthesize dsId=_dsId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;              //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                  //@synthesize languageCode=_languageCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)languageCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(BOOL)hasLanguageCode;
-(long long)dsId;
-(void)setDsId:(long long)arg1 ;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(void)setHasDsId:(BOOL)arg1 ;
-(BOOL)hasDsId;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
@end

