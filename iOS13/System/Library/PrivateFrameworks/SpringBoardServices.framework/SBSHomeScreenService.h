/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/SBSHomeScreenServiceServerToClientInterface.h>

@protocol OS_dispatch_queue;
@class BSServiceConnection, NSObject;

@interface SBSHomeScreenService : NSObject <SBSHomeScreenServiceServerToClientInterface> {

	BSServiceConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (assign,getter=isLowDensityIconLayoutEnabled,nonatomic) BOOL lowDensityIconLayoutEnabled; 
-(id)init;
-(void)dealloc;
-(void)resetHomeScreenLayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)folderPathToIconWithBundleIdentifier:(id)arg1 ;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1 ;
-(BOOL)isLowDensityIconLayoutEnabled;
-(void)setLowDensityIconLayoutEnabled:(BOOL)arg1 ;
@end

