/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKFaceObserver.h>
#import <libobjc.A.dylib/NTKEnumeratableFaceCollection.h>

@class NSString, NSUUID, NSMutableArray, NSMutableDictionary, NSMapTable, NSHashTable, NTKFace;

@interface NTKFaceCollection : NSObject <NTKFaceObserver, NTKEnumeratableFaceCollection> {

	NSString* _logIdentifier;
	NSUUID* _selectedUUID;
	NSMutableArray* _orderedUUIDs;
	NSMutableDictionary* _facesByUUID;
	NSMapTable* _UUIDsByFace;
	NSHashTable* _observers;
	NSString* _collectionIdentifier;
	NSUUID* _deviceUUID;
	NSString* _debugName;

}

@property (nonatomic,readonly) NSString * collectionIdentifier;                   //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * deviceUUID;                               //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (getter=hasLoaded,nonatomic,readonly) BOOL hasLoaded; 
@property (nonatomic,retain) NSString * debugName;                                //@synthesize debugName=_debugName - In the implementation block
@property (nonatomic,readonly) NTKFace * selectedFace; 
@property (nonatomic,readonly) unsigned long long selectedFaceIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)reset;
-(NSUUID *)deviceUUID;
-(NSString *)debugName;
-(void)setDebugName:(NSString *)arg1 ;
-(id)observers;
-(id)faceAtIndex:(unsigned long long)arg1 ;
-(id)logIdentifier;
-(id)orderedUUIDs;
-(NSString *)collectionIdentifier;
-(unsigned long long)numberOfFaces;
-(BOOL)hasLoaded;
-(void)enumerateFacesUsingBlock:(/*^block*/id)arg1 ;
-(NTKFace *)selectedFace;
-(id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2 ;
-(void)enumerateFaceNamesUsingBlock:(/*^block*/id)arg1 ;
-(void)appendFace:(id)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)setSelectedFace:(id)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)_updateLogIdentifier;
-(void)_systemAppStateDidChange;
-(id)selectedUUID;
-(id)facesByUUID;
-(void)_throwIfNotLoaded:(SEL)arg1 ;
-(void)_setSelectedUUID:(id)arg1 notify:(BOOL)arg2 suppressingCallbackToObserver:(id)arg3 ;
-(void)_didSelectFaceUUID:(id)arg1 ;
-(void)addFace:(id)arg1 atIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3 ;
-(void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 suppressingCallbackToObserver:(id)arg4 ;
-(void)_didAddFace:(id)arg1 withUUID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_didMoveFace:(id)arg1 withUUID:(id)arg2 toIndex:(unsigned long long)arg3 ;
-(void)_notifyReorderedFacesOmittingObserver:(id)arg1 ;
-(void)removeFace:(id)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)_removeFaceForUUID:(id)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)_didRemoveFace:(id)arg1 withUUID:(id)arg2 ;
-(id)_chooseNewSelectionBecauseSelectedUUIDWillBeRemovedAtIndex:(unsigned long long)arg1 ;
-(void)_notifyRemovedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3 ;
-(void)_notifySelectedFaceOmittingObserver:(id)arg1 ;
-(void)_notifyAddedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3 ;
-(unsigned long long)selectedFaceIndex;
-(unsigned long long)indexOfFace:(id)arg1 ;
-(BOOL)containsFace:(id)arg1 ;
-(void)enumerateFacesWithIndexesUsingBlock:(/*^block*/id)arg1 ;
-(void)setSelectedFaceIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)moveFace:(id)arg1 toIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3 ;
-(void)removeFaceAtIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)_setContentWithFaces:(id)arg1 order:(id)arg2 selection:(id)arg3 ;
-(void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_removeFaceForUUID:(id)arg1 ;
-(void)_selectFaceUUID:(id)arg1 notify:(BOOL)arg2 ;
-(void)_updateOrderedUUIDsFromReference:(id)arg1 andNotifyReordered:(BOOL)arg2 ;
-(void)_upgradeFace:(id)arg1 forUUID:(id)arg2 ;
-(void)replaceFaceLocallyByCopy:(id)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(id)UUIDsByFace;
@end

