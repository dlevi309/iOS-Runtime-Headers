/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPublisherWebAccessOptInRequest : PBRequest <NSCopying> {

	NSString* _channelId;
	NSString* _country;
	NSString* _email;
	NSString* _iapId;
	NSString* _language;
	NSString* _purchaseReceipt;

}

@property (nonatomic,readonly) BOOL hasChannelId; 
@property (nonatomic,retain) NSString * channelId;                    //@synthesize channelId=_channelId - In the implementation block
@property (nonatomic,readonly) BOOL hasEmail; 
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) BOOL hasPurchaseReceipt; 
@property (nonatomic,retain) NSString * purchaseReceipt;              //@synthesize purchaseReceipt=_purchaseReceipt - In the implementation block
@property (nonatomic,readonly) BOOL hasIapId; 
@property (nonatomic,retain) NSString * iapId;                        //@synthesize iapId=_iapId - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                     //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country;                      //@synthesize country=_country - In the implementation block
-(id)dictionaryRepresentation;
-(void)setEmail:(NSString *)arg1 ;
-(BOOL)hasEmail;
-(NSString *)iapId;
-(NSString *)country;
-(BOOL)hasIapId;
-(BOOL)hasLanguage;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCountry;
-(BOOL)hasChannelId;
-(id)description;
-(NSString *)channelId;
-(BOOL)hasPurchaseReceipt;
-(unsigned long long)hash;
-(NSString *)purchaseReceipt;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setChannelId:(NSString *)arg1 ;
-(NSString *)email;
-(void)setIapId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(void)setPurchaseReceipt:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

