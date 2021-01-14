/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/_PUOneUpSelectionIndicatorCompatibleManager.h>
#import <libobjc.A.dylib/PUMutableUUIDSelectionManager.h>

@class NSMutableSet, NSString, NSSet;

@interface PUUUIDSelectionManager : PXObservable <_PUOneUpSelectionIndicatorCompatibleManager, PUMutableUUIDSelectionManager> {

	NSMutableSet* __mutableSelectedUUIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSMutableSet * _mutableSelectedUUIDs;              //@synthesize _mutableSelectedUUIDs=__mutableSelectedUUIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * selectedUUIDs; 
-(id)init;
-(NSSet *)selectedUUIDs;
-(void)setSelectedUUIDs:(NSSet *)arg1 ;
-(id)mutableChangeObject;
-(void)deselectAllUUIDs;
-(NSMutableSet *)_mutableSelectedUUIDs;
-(BOOL)pu_isAssetReferenceSelected:(id)arg1 ;
-(void)pu_registerSelectionIndicatorObserver:(id)arg1 ;
-(void)pu_unregisterSelectionIndicatorObserver:(id)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)initWithSelectedUUIDs:(id)arg1 ;
-(void)addSelectedUUID:(id)arg1 ;
-(void)removeSelectedUUID:(id)arg1 ;
-(BOOL)isSelectedUUID:(id)arg1 ;
@end

