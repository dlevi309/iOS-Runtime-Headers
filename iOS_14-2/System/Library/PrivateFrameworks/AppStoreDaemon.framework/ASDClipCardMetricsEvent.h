/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSURL;

@interface ASDClipCardMetricsEvent : NSObject <NSSecureCoding> {

	BOOL _thirdPartyWithNoAppReferrer;
	NSString* _bundleID;
	NSNumber* _itemID;
	NSString* _referralSource;
	NSString* _referralSourceBundleID;
	NSString* _referrerType;
	NSURL* _sourceURL;

}

@property (nonatomic,retain) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * itemID;                              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * referralSource;                      //@synthesize referralSource=_referralSource - In the implementation block
@property (nonatomic,retain) NSString * referralSourceBundleID;              //@synthesize referralSourceBundleID=_referralSourceBundleID - In the implementation block
@property (nonatomic,retain) NSString * referrerType;                        //@synthesize referrerType=_referrerType - In the implementation block
@property (assign,nonatomic) BOOL thirdPartyWithNoAppReferrer;               //@synthesize thirdPartyWithNoAppReferrer=_thirdPartyWithNoAppReferrer - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                              //@synthesize sourceURL=_sourceURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSURL *)sourceURL;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)referrerType;
-(void)setReferrerType:(NSString *)arg1 ;
-(BOOL)thirdPartyWithNoAppReferrer;
-(void)setThirdPartyWithNoAppReferrer:(BOOL)arg1 ;
-(NSNumber *)itemID;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithClipBundleID:(id)arg1 ;
-(NSString *)referralSource;
-(void)setReferralSource:(NSString *)arg1 ;
-(NSString *)referralSourceBundleID;
-(void)setReferralSourceBundleID:(NSString *)arg1 ;
@end

