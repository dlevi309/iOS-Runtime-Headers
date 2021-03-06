/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface SFSuggestedUserProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _suggestedEmails;
	NSArray* _suggestedNonEmails;

}
+(id)sharedProvider;
-(id)init;
-(void)suggestedUsersOfType:(long long)arg1 matchingText:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)suggestedUsersOfType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_passwordStoreChangedNotification:(id)arg1 ;
-(id)_allCachedSuggestedUsersWithType:(long long)arg1 ;
-(id)_cachedSuggestedUsersWithType:(long long)arg1 matchingText:(id)arg2 ;
-(void)_getSuggestedUsersFromSavedPasswords:(id)arg1 suggestedEmails:(id*)arg2 suggestedNonEmails:(id*)arg3 ;
@end

