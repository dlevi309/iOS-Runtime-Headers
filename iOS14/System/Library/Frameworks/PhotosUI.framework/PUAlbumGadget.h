/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXDiagnosticsEnvironment.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate, PUAlbumGadgetDelegate;
@class PXGadgetSpec, NSString, PUAlbumListCellContentView, PHCollection, NSIndexSet, PUAlbumListCellContentViewHelper;

@interface PUAlbumGadget : NSObject <PXDiagnosticsEnvironment, PXGadget> {

	BOOL _contentViewVisible;
	BOOL _needsUpdate;
	PXGadgetSpec* _gadgetSpec;
	id<PXGadgetDelegate> _delegate;
	PUAlbumListCellContentView* _albumListCellContentView;
	PHCollection* _collection;
	id<PUAlbumGadgetDelegate> _albumGadgetDelegate;
	NSIndexSet* _indexesOfHiddenStackItems;

}

@property (nonatomic,readonly) PUAlbumListCellContentViewHelper * albumListCellContentViewHelper; 
@property (assign,getter=isContentViewVisible,nonatomic) BOOL contentViewVisible;                              //@synthesize contentViewVisible=_contentViewVisible - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                                                 //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,retain) PHCollection * collection;                                                        //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) PUAlbumListCellContentView * albumListCellContentView;                          //@synthesize albumListCellContentView=_albumListCellContentView - In the implementation block
@property (assign,nonatomic,__weak) id<PUAlbumGadgetDelegate> albumGadgetDelegate;                             //@synthesize albumGadgetDelegate=_albumGadgetDelegate - In the implementation block
@property (nonatomic,copy) NSIndexSet * indexesOfHiddenStackItems;                                             //@synthesize indexesOfHiddenStackItems=_indexesOfHiddenStackItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                        //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
-(PUAlbumListCellContentView *)albumListCellContentView;
-(id<PUAlbumGadgetDelegate>)albumGadgetDelegate;
-(PUAlbumListCellContentViewHelper *)albumListCellContentViewHelper;
-(BOOL)isContentViewVisible;
-(void)reconfigure;
-(void)setAlbumGadgetDelegate:(id<PUAlbumGadgetDelegate>)arg1 ;
-(PXGadgetSpec *)gadgetSpec;
-(id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2 ;
-(NSIndexSet *)indexesOfHiddenStackItems;
-(void)setContentViewVisible:(BOOL)arg1 ;
-(void)contentViewDidDisappear;
-(void)setIndexesOfHiddenStackItems:(NSIndexSet *)arg1 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(CGRect)rectForStackItemAtIndex:(long long)arg1 inCoordinateSpace:(id)arg2 ;
-(unsigned long long)gadgetCapabilities;
-(long long)estimatedIndexInCollection:(id)arg1 ofAssetForStackItemAtIndex:(long long)arg2 ;
-(unsigned long long)gadgetType;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)contentViewWillAppear;
-(BOOL)needsUpdate;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(PHCollection *)collection;
-(id)init;
-(void)setCollection:(PHCollection *)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateContent;
-(id)contentView;
-(NSString *)title;
@end

