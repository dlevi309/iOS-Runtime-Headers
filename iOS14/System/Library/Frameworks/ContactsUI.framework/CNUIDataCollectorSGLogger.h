/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNScheduler;
@interface CNUIDataCollectorSGLogger : NSObject {

	/*^block*/id _serviceProvider;
	id<CNScheduler> _workQueue;

}

@property (nonatomic,retain) id<CNScheduler> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy,readonly) id serviceProvider;              //@synthesize serviceProvider=_serviceProvider - In the implementation block
+(id)loggerWithSGSuggestionsServiceProvider:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(void)setWorkQueue:(id<CNScheduler>)arg1 ;
-(id<CNScheduler>)workQueue;
-(id)initWithSuggestionsServiceProvider:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(void)performBlockWithService:(/*^block*/id)arg1 ;
-(void)logContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3 ;
-(id)serviceProvider;
-(void)logSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3 ;
-(void)logSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3 ;
-(void)logContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3 ;
-(void)logSearchResultsIncludedPureSuggestionsWithBundleID:(id)arg1 ;
@end

