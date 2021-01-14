/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNLaunchServicesAdapter.h>

@class LSApplicationWorkspace;

@interface CNLaunchServicesLocalAdapter : NSObject <CNLaunchServicesAdapter> {

	LSApplicationWorkspace* _workspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * workspace;              //@synthesize workspace=_workspace - In the implementation block
+(id)lsApplicationWorkspaceForBundleId:(id)arg1 ;
-(void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setWorkspace:(LSApplicationWorkspace *)arg1 ;
-(LSApplicationWorkspace *)workspace;
-(void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)applicationForBundleIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(void)applicationsForUserActivityType:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end

