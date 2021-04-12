/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class PXGadgetSpec, NSString;


@protocol PXGadget <NSObject>
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@optional
-(void)contentViewDidDisappear;
-(NSString *)localizedTitle;
-(void)contentViewWillAppear;
-(NSString *)accessoryButtonTitle;
-(void)userDidSelectGadget;
-(void)contentHasBeenSeen;
-(void)userDidSelectAccessoryButton:(id)arg1;
-(void)prepareCollectionViewItem:(id)arg1;
-(void)removeCollectionViewItem:(id)arg1;
-(id)debugURLsForDiagnostics;
-(id)uniqueGadgetIdentifier;
-(void)gadgetControllerHasAppeared;
-(void)gadgetControllerHasDisappeared;
-(void)prefetchDuringScrollingForWidth:(double)arg1;
-(id)targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2;
-(Class)collectionViewItemClass;
-(id)contentViewController;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
-(CGRect)visibleContentRect;
-(unsigned long long)accessoryButtonType;
-(void)commitPreviewViewController:(id)arg1;
-(void)setVisibleContentRect:(CGRect)arg1;
-(id)contentView;
-(unsigned long long)headerStyle;
-(long long)priority;
-(void)preloadResources;
-(void)setPriority:(long long)arg1;

@required
-(PXGadgetSpec *)gadgetSpec;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(void)setGadgetSpec:(id)arg1;
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(CGSize*)sizeThatFits:(CGSize)arg1;

@end

