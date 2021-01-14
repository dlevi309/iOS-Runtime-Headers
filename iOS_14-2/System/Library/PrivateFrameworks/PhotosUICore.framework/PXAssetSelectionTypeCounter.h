/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXInfoProvider.h>
#import <libobjc.A.dylib/PXInfoUpdaterObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXSectionedSelectionManager, PXInfoUpdater, NSString;

@interface PXAssetSelectionTypeCounter : PXObservable <PXChangeObserver, PXInfoProvider, PXInfoUpdaterObserver> {

	NSObject*<OS_dispatch_queue> _countUpdateQueue;
	PXSectionedSelectionManager* _selectionManager;
	PXInfoUpdater* _infoUpdater;
	SCD_Struct_PX72 _typedCount;

}

@property (nonatomic,readonly) PXInfoUpdater * infoUpdater;                                        //@synthesize infoUpdater=_infoUpdater - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX72 typedCount;                                           //@synthesize typedCount=_typedCount - In the implementation block
@property (nonatomic,__weak,readonly) PXSectionedSelectionManager * selectionManager;              //@synthesize selectionManager=_selectionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSectionedSelectionManager *)selectionManager;
-(void)infoUpdaterDidUpdate:(id)arg1 ;
-(id)selectionSnapshot;
-(id)initWithSelectionManager:(id)arg1 ;
-(id)init;
-(PXInfoUpdater *)infoUpdater;
-(SCD_Struct_PX72)typedCount;
-(id)requestInfoOfKind:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)setTypedCount:(SCD_Struct_PX72)arg1 ;
-(long long)priorityForInfoRequestOfKind:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

