/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXMutableGadgetSpecManager.h>

@class PXGadgetSpec, PXExtendedTraitCollection, NSMutableSet, NSString;

@interface PXGadgetSpecManager : PXObservable <PXChangeObserver, PXMutableGadgetSpecManager> {

	PXGadgetSpec* _currentGadgetSpec;
	Class _gadgetSpecClass;
	long long _scrollAxis;
	PXExtendedTraitCollection* _traitCollection;
	NSMutableSet* _updatedGadgets;

}

@property (nonatomic,retain) PXGadgetSpec * currentGadgetSpec;                         //@synthesize currentGadgetSpec=_currentGadgetSpec - In the implementation block
@property (nonatomic,readonly) Class gadgetSpecClass;                                  //@synthesize gadgetSpecClass=_gadgetSpecClass - In the implementation block
@property (nonatomic,readonly) long long scrollAxis;                                   //@synthesize scrollAxis=_scrollAxis - In the implementation block
@property (nonatomic,retain) PXExtendedTraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedGadgets;                            //@synthesize updatedGadgets=_updatedGadgets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXExtendedTraitCollection *)traitCollection;
-(void)setTraitCollection:(PXExtendedTraitCollection *)arg1 ;
-(id)initWithGadgetSpecClass:(Class)arg1 scrollAxis:(long long)arg2 traitCollection:(id)arg3 ;
-(long long)scrollAxis;
-(void)_extendedTraitCollection:(id)arg1 didChange:(unsigned long long)arg2 ;
-(PXGadgetSpec *)currentGadgetSpec;
-(void)setUpdatedGadgets:(NSMutableSet *)arg1 ;
-(id)mutableChangeObject;
-(NSMutableSet *)updatedGadgets;
-(void)updateGadgetDataSourceToSpecIfNeeded:(id)arg1 ;
-(void)setCurrentGadgetSpec:(PXGadgetSpec *)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(Class)gadgetSpecClass;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

