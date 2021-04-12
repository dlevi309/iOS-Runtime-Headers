/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OFUIGridViewDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/OFUIWindowDraggingSource.h>

@class NSOperationQueue, OFUIGridView, NSString;

@interface OFUIGridViewController : OFUIViewController <OFUIGridViewDataSource, UIScrollViewDelegate, OFUIWindowDraggingSource> {

	unsigned long long _gridViewStyle;
	NSOperationQueue* _operationQueue;
	BOOL _hideWhenDeviceRotates;
	BOOL _maintainPercentageScrolledWhenDeviceRotates;
	OFUIGridView* _gridView;

}

@property (nonatomic,retain) OFUIGridView * gridView;                                       //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,retain,readonly) NSOperationQueue * operationQueue;                    //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) BOOL hideWhenDeviceRotates;                                    //@synthesize hideWhenDeviceRotates=_hideWhenDeviceRotates - In the implementation block
@property (assign,nonatomic) BOOL maintainPercentageScrolledWhenDeviceRotates;              //@synthesize maintainPercentageScrolledWhenDeviceRotates=_maintainPercentageScrolledWhenDeviceRotates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)gridViewClass;
-(id)init;
-(void)dealloc;
-(NSOperationQueue *)operationQueue;
-(void)commonInit;
-(void)loadView;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)viewWillUnload;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
-(OFUIGridView *)gridView;
-(void)setGridView:(OFUIGridView *)arg1 ;
-(void)cancelAllOperations:(BOOL)arg1 ;
-(CGPoint)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2 ;
-(CGRect)draggingSource:(id)arg1 originalFrameForItem:(id)arg2 ;
-(void)draggingSource:(id)arg1 prepareItem:(id)arg2 ;
-(void)draggingSource:(id)arg1 cleanupItem:(id)arg2 ;
-(void)updateDisplayedCellOperationsPriority:(id)arg1 ;
-(long long)numberOfCellsInGridView:(id)arg1 ;
-(id)gridView:(id)arg1 cellAtIndex:(unsigned long long)arg2 ;
-(void)updateDisplayedCellsOperationsPriority;
-(BOOL)hideWhenDeviceRotates;
-(void)setHideWhenDeviceRotates:(BOOL)arg1 ;
-(BOOL)maintainPercentageScrolledWhenDeviceRotates;
-(void)setMaintainPercentageScrolledWhenDeviceRotates:(BOOL)arg1 ;
@end

