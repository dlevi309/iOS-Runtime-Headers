/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNGeminiLogger.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _CNGeminiLogger : NSObject <CNGeminiLogger> {

	NSObject*<OS_os_log> _log;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)updatingSubscriptionInfo:(/*^block*/id)arg1 ;
-(void)fetchingBestResultForDestinationHandle:(/*^block*/id)arg1 ;
-(void)recordedInteraction:(id)arg1 forContext:(id)arg2 ;
-(void)recordInteractionError:(id)arg1 ;
-(void)registeredForContextUpdatesWithToken:(id)arg1 ;
-(void)unregisteredForContextUpdatesWithToken:(id)arg1 ;
-(void)updatedSubscriptionInfo:(id)arg1 ;
-(void)updateSubscriptionInfoError:(id)arg1 ;
-(void)fetchedSortedResults:(id)arg1 forInteraction:(id)arg2 ;
-(void)fetchSortedResultsForInteraction:(id)arg1 error:(id)arg2 ;
@end

