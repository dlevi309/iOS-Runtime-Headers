/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SSVPlayActivityEventItemIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _equivalencySourceAdamID;
	unsigned long long _cloudID;
	NSString* _lyricsID;
	long long _purchasedAdamID;
	long long _radioAdamID;
	long long _subscriptionAdamID;
	long long _tvShowPurchasedAdamID;
	long long _tvShowSubscriptionAdamID;

}

@property (nonatomic,readonly) unsigned long long cloudID;                      //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,copy,readonly) NSString * lyricsID;                        //@synthesize lyricsID=_lyricsID - In the implementation block
@property (nonatomic,readonly) long long purchasedAdamID;                       //@synthesize purchasedAdamID=_purchasedAdamID - In the implementation block
@property (nonatomic,readonly) long long radioAdamID;                           //@synthesize radioAdamID=_radioAdamID - In the implementation block
@property (nonatomic,readonly) long long equivalencySourceAdamID;               //@synthesize equivalencySourceAdamID=_equivalencySourceAdamID - In the implementation block
@property (nonatomic,readonly) long long subscriptionAdamID;                    //@synthesize subscriptionAdamID=_subscriptionAdamID - In the implementation block
@property (nonatomic,readonly) long long tvShowPurchasedAdamID;                 //@synthesize tvShowPurchasedAdamID=_tvShowPurchasedAdamID - In the implementation block
@property (nonatomic,readonly) long long tvShowSubscriptionAdamID;              //@synthesize tvShowSubscriptionAdamID=_tvShowSubscriptionAdamID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)cloudID;
-(long long)purchasedAdamID;
-(long long)subscriptionAdamID;
-(long long)equivalencySourceAdamID;
-(id)_copyWithClass:(Class)arg1 ;
-(NSString *)lyricsID;
-(long long)radioAdamID;
-(long long)tvShowPurchasedAdamID;
-(long long)tvShowSubscriptionAdamID;
@end

