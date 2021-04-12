/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/ASDAppQueryResultsObserver.h>

@interface AppStoreKit.DeviceAppStateDataSource : NSObject <ASDAppQueryResultsObserver> {

	 appQuery;
	 store;
	 delegate;
	 accessQueue;
	 queryQueue;
	 expectedAppStates;
	 previouslyInstalledLibraryItems;
	 availableUpdatesCache;

}
-(void)didReceiveUpdateFromProductPage:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)appQuery:(id)arg1 resultsDidChange:(id)arg2 ;
@end

