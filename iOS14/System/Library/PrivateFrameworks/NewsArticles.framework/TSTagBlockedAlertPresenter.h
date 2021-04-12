/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/FCSubscriptionObserving.h>

@interface TSTagBlockedAlertPresenter : NSObject <FCSubscriptionObserving> {

	 enabled;
	 alertPresenter;

}

@property (assign,nonatomic) BOOL enabled; 
-(BOOL)enabled;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
@end

