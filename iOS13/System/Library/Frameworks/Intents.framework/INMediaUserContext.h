/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)subscriptionStatus;
-(void)setSubscriptionStatus:(long long)arg1 ;
-(id)safeLibraryItems;
-(NSNumber *)numberOfLibraryItems;
-(void)setNumberOfLibraryItems:(NSNumber *)arg1 ;
@end

