/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUILibraryInterface.h>

@class NSString;

@interface SKUIMediaLibraryInterface : NSObject <SKUILibraryInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeMediaItemsForLibraryItems:(id)arg1 ;
-(id)stateForLibraryItem:(id)arg1 ;
-(BOOL)performActionForLibraryItem:(id)arg1 ;
-(id)exposedPlatformItemKinds;
-(void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_newDefaultQuery;
-(long long)_availabilityForMediaItem:(id)arg1 ;
-(unsigned long long)_AVTypesForMediaItem:(id)arg1 ;
-(id)_storePlatformKindForMediaItem:(id)arg1 ;
-(void)_restrictQueryToLocalContent:(id)arg1 ;
-(BOOL)isItemLocalAudiobook:(id)arg1 ;
@end

