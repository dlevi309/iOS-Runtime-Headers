/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBBundleSubscriberInfo : PBCodable <NSCopying> {

	long long _startTimestamp;
	int _bundleSubscriptionStatus;
	NSMutableArray* _subscribedChannelIds;
	NSString* _userId;
	NSString* _userStorefrontId;
	BOOL _isAmplifyUser;
	BOOL _isBundlePurchaser;
	BOOL _isStoreDemoModeEnabled;
	SCD_Struct_NT10 _has;

}

@property (assign,nonatomic) BOOL hasBundleSubscriptionStatus; 
@property (assign,nonatomic) int bundleSubscriptionStatus;                       //@synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscribedChannelIds;              //@synthesize subscribedChannelIds=_subscribedChannelIds - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                                  //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                        //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (assign,nonatomic) BOOL hasStartTimestamp; 
@property (assign,nonatomic) long long startTimestamp;                           //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsStoreDemoModeEnabled; 
@property (assign,nonatomic) BOOL isStoreDemoModeEnabled;                        //@synthesize isStoreDemoModeEnabled=_isStoreDemoModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsBundlePurchaser; 
@property (assign,nonatomic) BOOL isBundlePurchaser;                             //@synthesize isBundlePurchaser=_isBundlePurchaser - In the implementation block
@property (assign,nonatomic) BOOL hasIsAmplifyUser; 
@property (assign,nonatomic) BOOL isAmplifyUser;                                 //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
+(Class)subscribedChannelIdsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStartTimestamp:(long long)arg1 ;
-(long long)startTimestamp;
-(void)setHasStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasStartTimestamp;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)isAmplifyUser;
-(void)setIsAmplifyUser:(BOOL)arg1 ;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(BOOL)hasUserId;
-(void)setIsStoreDemoModeEnabled:(BOOL)arg1 ;
-(void)setHasIsStoreDemoModeEnabled:(BOOL)arg1 ;
-(BOOL)hasIsStoreDemoModeEnabled;
-(BOOL)isStoreDemoModeEnabled;
-(void)addSubscribedChannelIds:(id)arg1 ;
-(int)bundleSubscriptionStatus;
-(void)setBundleSubscriptionStatus:(int)arg1 ;
-(void)setHasBundleSubscriptionStatus:(BOOL)arg1 ;
-(BOOL)hasBundleSubscriptionStatus;
-(id)bundleSubscriptionStatusAsString:(int)arg1 ;
-(int)StringAsBundleSubscriptionStatus:(id)arg1 ;
-(void)clearSubscribedChannelIds;
-(unsigned long long)subscribedChannelIdsCount;
-(id)subscribedChannelIdsAtIndex:(unsigned long long)arg1 ;
-(void)setIsBundlePurchaser:(BOOL)arg1 ;
-(void)setHasIsBundlePurchaser:(BOOL)arg1 ;
-(BOOL)hasIsBundlePurchaser;
-(void)setHasIsAmplifyUser:(BOOL)arg1 ;
-(BOOL)hasIsAmplifyUser;
-(NSMutableArray *)subscribedChannelIds;
-(void)setSubscribedChannelIds:(NSMutableArray *)arg1 ;
-(BOOL)isBundlePurchaser;
@end

