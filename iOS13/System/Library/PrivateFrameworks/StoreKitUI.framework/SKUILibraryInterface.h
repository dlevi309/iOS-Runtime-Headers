/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUILibraryInterface <NSObject>
@optional
-(void)removeMediaItemsForLibraryItems:(id)arg1;
-(BOOL)performActionForLibraryItem:(id)arg1;
-(id)exposedPlatformItemKinds;
-(id)stateForLibraryItemAfterLibraryIntegration:(id)arg1;

@required
-(id)stateForLibraryItem:(id)arg1;
-(void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end

