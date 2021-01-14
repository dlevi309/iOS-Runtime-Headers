/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXAssetImportStatusManager.h>

@class NSHashTable, NSMutableDictionary, NSString;

@interface PXPhotoKitImportStatusManager : NSObject <PXAssetImportStatusManager> {

	NSHashTable* _statusObservers;
	NSMutableDictionary* _simulatedStateByAssetID;
	BOOL _supportsStateSimulation;

}

@property (nonatomic,readonly) BOOL supportsStateSimulation;              //@synthesize supportsStateSimulation=_supportsStateSimulation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initAllowingSimulation:(BOOL)arg1 ;
-(void)_notifySimulationObserversForAssetReference:(id)arg1 ;
-(void)beginSimulatedImportForAssetReference:(id)arg1 ;
-(void)completeSimulatedImportForAssetReference:(id)arg1 withSuccess:(BOOL)arg2 ;
-(long long)_simulatedStateForAsset:(id)arg1 ;
-(BOOL)supportsStateSimulation;
-(long long)importStateForAsset:(id)arg1 ;
-(void)addAssetImportStatusObserver:(id)arg1 ;
-(void)removeAssetImportStatusObserver:(id)arg1 ;
@end

