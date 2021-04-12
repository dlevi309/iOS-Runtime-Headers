/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNLaunchServicesAdapter, OS_os_log;
@class NSObject;

@interface CNLaunchServices : NSObject {

	id<CNLaunchServicesAdapter> _adapter;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) id<CNLaunchServicesAdapter> adapter;              //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                         //@synthesize log=_log - In the implementation block
-(id)init;
-(id)applicationsForUserActivityType:(id)arg1 ;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id<CNLaunchServicesAdapter>)adapter;
-(id)initWithAdapter:(id)arg1 ;
-(id)applicationForBundleIdentifier:(id)arg1 ;
-(void)openUserActivityData:(id)arg1 inApplication:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAdapter:(id<CNLaunchServicesAdapter>)arg1 ;
@end

