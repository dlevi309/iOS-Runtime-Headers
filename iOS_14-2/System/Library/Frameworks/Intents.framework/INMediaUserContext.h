/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INUserContext.h>

@class NSNumber;

@interface INMediaUserContext : INUserContext {

	long long _subscriptionStatus;
	NSNumber* _numberOfLibraryItems;

}

@property (assign,nonatomic) long long subscriptionStatus;               //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,copy) NSNumber * numberOfLibraryItems;              //@synthesize numberOfLibraryItems=_numberOfLibraryItems - In the implementation block
+(long long)_type;
+(BOOL)supportsSecureCoding;
+(id)_sharedFormatter;
-(id)init;
-(id)safeLibraryItems;
-(NSNumber *)numberOfLibraryItems;
-(void)setNumberOfLibraryItems:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubscriptionStatus:(long long)arg1 ;
-(long long)subscriptionStatus;
@end

