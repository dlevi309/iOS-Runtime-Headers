/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasDsId; 
@property (assign,nonatomic) long long dsId;                           //@synthesize dsId=_dsId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;              //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                  //@synthesize languageCode=_languageCode - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasLanguageCode;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(void)setLanguageCode:(NSString *)arg1 ;
-(long long)dsId;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(NSString *)languageCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasDsId;
-(unsigned long long)hash;
-(void)setHasDsId:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDsId:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

