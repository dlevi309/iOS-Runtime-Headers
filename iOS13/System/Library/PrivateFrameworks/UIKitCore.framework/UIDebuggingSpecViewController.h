/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIDebuggingInformationViewController.h>

@class UIView, NSMutableArray, UICollectionView, UICollectionViewFlowLayout, NSString;

@interface UIDebuggingSpecViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIDebuggingInformationViewController> {

	UIView* _spec;
	NSMutableArray* _specImages;
	double _originalOpacity;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	CGPoint _origin;

}

@property (nonatomic,retain) UIView * spec;                                        //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) NSMutableArray * specImages;                          //@synthesize specImages=_specImages - In the implementation block
@property (assign,nonatomic) CGPoint origin;                                       //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) double originalOpacity;                               //@synthesize originalOpacity=_originalOpacity - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;              //@synthesize flowLayout=_flowLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)origin;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)prepareForMediaBrowser;
-(void)gotDeleteGesture:(id)arg1 ;
-(NSMutableArray *)specImages;
-(void)gotPanGesture:(id)arg1 ;
-(void)hideImage;
-(void)setSpec:(UIView *)arg1 ;
-(UIView *)spec;
-(void)setOriginalOpacity:(double)arg1 ;
-(double)originalOpacity;
-(BOOL)startMediaBrowserFromViewController:(id)arg1 ;
-(void)setSpecImages:(NSMutableArray *)arg1 ;
@end

