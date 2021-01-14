/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)init;
-(void)appQuery:(id)arg1 resultsDidChange:(id)arg2 ;
-(void)dealloc;
-(void)didReceiveUpdateFromProductPage:(id)arg1 ;
@end

