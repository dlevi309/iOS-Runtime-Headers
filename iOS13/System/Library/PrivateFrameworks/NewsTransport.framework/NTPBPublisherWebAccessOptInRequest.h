/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)country;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(BOOL)hasLanguage;
-(void)setCountry:(NSString *)arg1 ;
-(BOOL)hasCountry;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(NSString *)purchaseReceipt;
-(void)setPurchaseReceipt:(NSString *)arg1 ;
-(void)setIapId:(NSString *)arg1 ;
-(BOOL)hasChannelId;
-(BOOL)hasEmail;
-(BOOL)hasPurchaseReceipt;
-(BOOL)hasIapId;
-(NSString *)iapId;
@end

