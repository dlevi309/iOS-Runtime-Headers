/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBRestartManagerWorkspaceDataSource.h>

@protocol SBRestartManagerWorkspaceDataSource <NSObject>
@required
-(BOOL)isUILocked;
-(void)terminateAllApplicationsForReason:(long long)arg1 description:(id)arg2 completion:(/*^block*/id)arg3;
-(id)activePrimaryApplicationBundleID;

@end


@class NSString;

@interface SBRestartManagerWorkspaceDataSource : NSObject <SBRestartManagerWorkspaceDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isUILocked;
-(void)terminateAllApplicationsForReason:(long long)arg1 description:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)activePrimaryApplicationBundleID;
@end

