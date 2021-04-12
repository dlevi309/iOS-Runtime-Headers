/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
@end

