/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTXPCServiceSubscriptionInfo : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _subscriptions;
	NSArray* _subscriptionsInUse;
	NSArray* _subscriptionsValid;

}

@property (nonatomic,retain) NSArray * subscriptions;                   //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionsInUse;              //@synthesize subscriptionsInUse=_subscriptionsInUse - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionsValid;              //@synthesize subscriptionsValid=_subscriptionsValid - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(NSArray *)subscriptions;
-(NSArray *)subscriptionsInUse;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)subscriptionsValid;
-(void)setSubscriptionsInUse:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)redactedDescription;
-(void)setSubscriptionsValid:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

