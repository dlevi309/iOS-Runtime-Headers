/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/SXNewsletterSubscriptionStatusProviding.h>
#import <libobjc.A.dylib/FCNewsletterSubscriptionObserver.h>

@interface NewsArticles.NewsletterSubscriptionStatusProvider : NSObject <SXNewsletterSubscriptionStatusProviding, FCNewsletterSubscriptionObserver> {

	 newsletterManager;
	 observers;

}

@property (readonly,nonatomic) unsigned long long newsletterSubscriptionStatus; 
-(void)addObserver:(id)arg1 ;
-(void)newsletterSubscriptionChangedFromSubscription:(long long)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)newsletterSubscriptionStatus;
-(id)init;
@end

