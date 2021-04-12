/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSNumber, NSString, NSURL, NSDate;

@interface GKStoreItemInternal : GKInternalRepresentation {

	NSNumber* _adamID;
	NSString* _artistName;
	NSString* _priceDisplay;
	NSURL* _viewItemURL;
	NSURL* _shortViewItemURL;
	NSURL* _tellAFriendMessageContentsUrl;
	NSDate* _expirationDate;
	unsigned _numberOfUserRatings;
	float _averageUserRating;
	BOOL _owned;

}

@property (nonatomic,retain) NSNumber * adamID;                                  //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) NSString * artistName;                              //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,retain) NSString * priceDisplay;                            //@synthesize priceDisplay=_priceDisplay - In the implementation block
@property (nonatomic,retain) NSURL * viewItemURL;                                //@synthesize viewItemURL=_viewItemURL - In the implementation block
@property (nonatomic,retain) NSURL * shortViewItemURL;                           //@synthesize shortViewItemURL=_shortViewItemURL - In the implementation block
@property (nonatomic,retain) NSURL * tellAFriendMessageContentsUrl;              //@synthesize tellAFriendMessageContentsUrl=_tellAFriendMessageContentsUrl - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned numberOfUserRatings;                       //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) float averageUserRating;                            //@synthesize averageUserRating=_averageUserRating - In the implementation block
@property (assign,nonatomic) BOOL owned;                                         //@synthesize owned=_owned - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setPriceDisplay:(NSString *)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(BOOL)owned;
-(unsigned)numberOfUserRatings;
-(void)setViewItemURL:(NSURL *)arg1 ;
-(NSURL *)shortViewItemURL;
-(void)setShortViewItemURL:(NSURL *)arg1 ;
-(NSString *)artistName;
-(void)setAdamID:(NSNumber *)arg1 ;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(NSNumber *)adamID;
-(unsigned long long)hash;
-(NSString *)priceDisplay;
-(float)averageUserRating;
-(NSURL *)viewItemURL;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)storeItemURLForURL:(id)arg1 gamePlatform:(long long)arg2 extraQueryParams:(id)arg3 ;
-(void)storeItemURLForGamePlatform:(long long)arg1 withContext:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setAverageUserRating:(float)arg1 ;
-(NSURL *)tellAFriendMessageContentsUrl;
-(void)setTellAFriendMessageContentsUrl:(NSURL *)arg1 ;
-(void)setNumberOfUserRatings:(unsigned)arg1 ;
-(void)setOwned:(BOOL)arg1 ;
@end

