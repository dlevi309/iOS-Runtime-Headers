/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXNavigationListController.h>
#import <libobjc.A.dylib/PXGadget.h>
#import <libobjc.A.dylib/PXNavigableCollectionContainer.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, NSString;

@interface PXNavigationListGadget : PXNavigationListController <PXGadget, PXNavigableCollectionContainer> {

	id<PXGadgetDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;
	CGRect _visibleContentRect;

}

@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                             //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect;                             //@synthesize visibleContentRect=_visibleContentRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(PXGadgetSpec *)gadgetSpec;
-(BOOL)canNavigateToCollection:(id)arg1 ;
-(void)navigateToCollection:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)localizedTitle;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(void)contentHeightDidChange;
-(id)contentViewController;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(CGRect)visibleContentRect;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(void)setVisibleContentRect:(CGRect)arg1 ;
-(unsigned long long)headerStyle;
-(id)_listItemForCollection:(id)arg1 ;
-(void)_updateTableViewLayoutMargins;
@end

