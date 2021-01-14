/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNLSApplicationWorkspace.h>

@protocol CNLSApplicationWorkspace <NSObject>
@required
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2;
-(void)openUserActivity:(id)arg1 inApplication:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)observableForApplicationsChangedWithSchedulerProvider:(id)arg1;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1;
-(id)applicationsForUserActivityType:(id)arg1;
-(id)applicationForBundleIdentifier:(id)arg1;

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
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)init;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 ;
-(void)openUserActivity:(id)arg1 inApplication:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)observableForApplicationsChangedWithSchedulerProvider:(id)arg1 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1 ;
-(id)applicationsForUserActivityType:(id)arg1 ;
-(id)applicationForBundleIdentifier:(id)arg1 ;
@end

