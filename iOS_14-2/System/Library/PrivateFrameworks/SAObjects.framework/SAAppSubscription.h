/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(NSArray *)subscriptionTiers;
-(void)setSubscriptionTiers:(NSArray *)arg1 ;
@end

