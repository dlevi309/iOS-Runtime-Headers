/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface MPStoreItemMetadataCacheKey : NSObject <NSCopying> {

	BOOL _personalized;
	NSNumber* _accountIdentifier;
	NSNumber* _enqueuerAccountIdentifier;
	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                           //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * enqueuerAccountIdentifier;                   //@synthesize enqueuerAccountIdentifier=_enqueuerAccountIdentifier - In the implementation block
@property (assign,getter=isPersonalized,nonatomic) BOOL personalized;              //@synthesize personalized=_personalized - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;                        //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
+(void)_fastGetCacheKeyWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_slowGetCacheKeyWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)getCacheKeyWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)storefrontIdentifier;
-(id)initWithRequest:(id)arg1 response:(id)arg2 ;
-(NSNumber *)enqueuerAccountIdentifier;
-(NSNumber *)accountIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(BOOL)isPersonalized;
-(id)description;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(BOOL)_isGoodCacheKey;
-(unsigned long long)hash;
-(void)setPersonalized:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnqueuerAccountIdentifier:(NSNumber *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

