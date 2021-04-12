/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding> {

	long long _kind;
	NSString* _identifier;

}

@property (assign,nonatomic) long long kind;                   //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentSource;
+(id)subscriptionSourceForAppWithBundleID:(id)arg1 ;
+(id)subscriptionSourceForWebsiteWithDomainName:(id)arg1 ;
+(id)subscriptionSourceForWebsiteWithURL:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)kind;
-(id)description;
-(void)setKind:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

