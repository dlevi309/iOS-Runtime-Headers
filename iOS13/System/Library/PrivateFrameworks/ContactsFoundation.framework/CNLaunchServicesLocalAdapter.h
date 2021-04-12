/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNLaunchServicesAdapter.h>

@class LSApplicationWorkspace;

@interface CNLaunchServicesLocalAdapter : NSObject <CNLaunchServicesAdapter> {

	LSApplicationWorkspace* _workspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * workspace;              //@synthesize workspace=_workspace - In the implementation block
+(id)lsApplicationWorkspaceForBundleId:(id)arg1 ;
-(void)applicationsForUserActivityType:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)applicationForBundleIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(LSApplicationWorkspace *)workspace;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(void)setWorkspace:(LSApplicationWorkspace *)arg1 ;
@end

