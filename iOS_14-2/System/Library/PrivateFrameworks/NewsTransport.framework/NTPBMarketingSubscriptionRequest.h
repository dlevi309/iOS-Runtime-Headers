/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDeviceInfo, NSString;

@interface NTPBMarketingSubscriptionRequest : PBRequest <NSCopying> {

	NTPBDeviceInfo* _deviceInfo;
	NSString* _dsid;
	int _subscriptionAction;
	int _subscriptionType;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasSubscriptionType; 
@property (assign,nonatomic) int subscriptionType;                     //@synthesize subscriptionType=_subscriptionType - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionAction; 
@property (assign,nonatomic) int subscriptionAction;                   //@synthesize subscriptionAction=_subscriptionAction - In the implementation block
@property (nonatomic,readonly) BOOL hasDsid; 
@property (nonatomic,retain) NSString * dsid;                          //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfo; 
@property (nonatomic,retain) NTPBDeviceInfo * deviceInfo;              //@synthesize deviceInfo=_deviceInfo - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(NTPBDeviceInfo *)deviceInfo;
-(BOOL)hasDeviceInfo;
-(void)setDeviceInfo:(NTPBDeviceInfo *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)subscriptionType;
-(void)setSubscriptionType:(int)arg1 ;
-(id)description;
-(BOOL)hasDsid;
-(unsigned long long)hash;
-(void)setHasSubscriptionType:(BOOL)arg1 ;
-(BOOL)hasSubscriptionType;
-(int)subscriptionAction;
-(void)setHasSubscriptionAction:(BOOL)arg1 ;
-(BOOL)hasSubscriptionAction;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubscriptionAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

