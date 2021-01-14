/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ICPlayActivityEventItemIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _equivalencySourceAdamID;
	unsigned long long _cloudID;
	NSString* _lyricsID;
	long long _purchasedAdamID;
	long long _radioAdamID;
	long long _subscriptionAdamID;

}

@property (nonatomic,readonly) unsigned long long cloudID;                     //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,copy,readonly) NSString * lyricsID;                       //@synthesize lyricsID=_lyricsID - In the implementation block
@property (nonatomic,readonly) long long purchasedAdamID;                      //@synthesize purchasedAdamID=_purchasedAdamID - In the implementation block
@property (nonatomic,readonly) long long radioAdamID;                          //@synthesize radioAdamID=_radioAdamID - In the implementation block
@property (nonatomic,readonly) long long equivalencySourceAdamID;              //@synthesize equivalencySourceAdamID=_equivalencySourceAdamID - In the implementation block
@property (nonatomic,readonly) long long subscriptionAdamID;                   //@synthesize subscriptionAdamID=_subscriptionAdamID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)lyricsID;
-(long long)radioAdamID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_copyWithClass:(Class)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)purchasedAdamID;
-(long long)subscriptionAdamID;
-(long long)equivalencySourceAdamID;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)cloudID;
@end

