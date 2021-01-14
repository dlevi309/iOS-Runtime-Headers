/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXGadgetDataSource : PXSectionedDataSource {

	NSArray* _gadgetSections;

}

@property (nonatomic,readonly) NSArray * gadgetSections;              //@synthesize gadgetSections=_gadgetSections - In the implementation block
@property (nonatomic,readonly) BOOL hasNoContentGadget; 
-(BOOL)hasNoContentGadget;
-(id)init;
-(id)gadgetsOfType:(unsigned long long)arg1 ;
-(void)enumerateGadgetsUsingBlock:(/*^block*/id)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(void)enumerateGadgetSectionsUsingBlock:(/*^block*/id)arg1 ;
-(id)gadgetSectionWithIdentifier:(id)arg1 ;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)gadgetWithId:(id)arg1 ;
-(id)_gadgetsMatchingPredicate:(id)arg1 ;
-(PXSimpleIndexPath)indexPathForGadget:(id)arg1 ;
-(id)initWithGadgetSections:(id)arg1 ;
-(id)gadgetAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)gadgetsOfClass:(Class)arg1 ;
-(id)gadgetSectionAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForGadgetSectionWithIdentifier:(id)arg1 ;
-(NSArray *)gadgetSections;
-(void)_enumerateGadgetsInSection:(id)arg1 atSectionIndex:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumerateGadgetSectionsUsingBlock:(/*^block*/id)arg1 ;
@end

