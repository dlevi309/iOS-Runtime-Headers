/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString, NSArray;

@interface SAAppSubscription : SADomainObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSArray * subscriptionTiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appSubscription;
+(id)appSubscriptionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)subscriptionTiers;
-(void)setSubscriptionTiers:(NSArray *)arg1 ;
@end

