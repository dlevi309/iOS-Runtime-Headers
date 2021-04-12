/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

