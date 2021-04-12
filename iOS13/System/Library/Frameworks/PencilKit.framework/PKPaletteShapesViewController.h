/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol PKPaletteShapesViewControllerDelegate;
@class NSArray, NSString;

@interface PKPaletteShapesViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	id<PKPaletteShapesViewControllerDelegate> _delegate;
	NSArray* _shapes;

}

@property (nonatomic,retain) NSArray * shapes;                                                       //@synthesize shapes=_shapes - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteShapesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPaletteShapesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteShapesViewControllerDelegate>)arg1 ;
-(void)loadView;
-(CGSize)preferredContentSize;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSArray *)shapes;
-(void)setShapes:(NSArray *)arg1 ;
@end

