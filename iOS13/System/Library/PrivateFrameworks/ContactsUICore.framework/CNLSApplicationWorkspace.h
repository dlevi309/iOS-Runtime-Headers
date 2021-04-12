/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNLSApplicationWorkspace.h>

@protocol CNLSApplicationWorkspace <NSObject>
@required
-(id)applicationsForUserActivityType:(id)arg1;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1;
-(id)applicationForBundleIdentifier:(id)arg1;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2;
-(void)openUserActivity:(id)arg1 inApplication:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)observableForApplicationsChangedWithSchedulerProvider:(id)arg1;

@end


@protocol CNSchedulerProvider;
@class NSString;

@interface CNLSApplicationWorkspace : NSObject <CNLSApplicationWorkspace> {

	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,retain) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inProcessLaunchServices;
+(id)remoteAdapter;
+(id)launchServices;
-(id)init;
-(id)applicationsForUserActivityType:(id)arg1 ;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id)applicationForBundleIdentifier:(id)arg1 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 ;
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)openUserActivity:(id)arg1 inApplication:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)observableForApplicationsChangedWithSchedulerProvider:(id)arg1 ;
@end

