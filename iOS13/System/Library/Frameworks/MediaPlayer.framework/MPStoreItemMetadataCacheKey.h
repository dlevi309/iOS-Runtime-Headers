/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)getCacheKeyWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_fastGetCacheKeyWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_slowGetCacheKeyWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(BOOL)isPersonalized;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(id)initWithRequest:(id)arg1 response:(id)arg2 ;
-(BOOL)_isGoodCacheKey;
-(NSNumber *)enqueuerAccountIdentifier;
-(void)setEnqueuerAccountIdentifier:(NSNumber *)arg1 ;
-(void)setPersonalized:(BOOL)arg1 ;
@end

