/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>

@class NSArray, PUViewControllerSpec, UIView, PUPhotoEditToolPickerSpec;

@interface PUPhotoEditToolPickerController : UIViewController {

	long long _layoutDirection;
	long long _style;
	NSArray* _toolButtons;
	long long _selectedToolTag;
	PUViewControllerSpec* _parentSpec;
	NSArray* _toolButtonConstraints;
	UIView* _selectionIndicatorView;
	NSArray* _selectionIndicatorConstraints;
	double _interToolSpacing;
	PUPhotoEditToolPickerSpec* _toolPickerSpec;

}

@property (nonatomic,retain) NSArray * toolButtonConstraints;                         //@synthesize toolButtonConstraints=_toolButtonConstraints - In the implementation block
@property (nonatomic,retain) UIView * selectionIndicatorView;                         //@synthesize selectionIndicatorView=_selectionIndicatorView - In the implementation block
@property (nonatomic,retain) NSArray * selectionIndicatorConstraints;                 //@synthesize selectionIndicatorConstraints=_selectionIndicatorConstraints - In the implementation block
@property (assign,nonatomic) double interToolSpacing;                                 //@synthesize interToolSpacing=_interToolSpacing - In the implementation block
@property (nonatomic,retain) PUPhotoEditToolPickerSpec * toolPickerSpec;              //@synthesize toolPickerSpec=_toolPickerSpec - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                               //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,nonatomic) long long style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSArray * toolButtons;                                     //@synthesize toolButtons=_toolButtons - In the implementation block
@property (assign,nonatomic) long long selectedToolTag;                               //@synthesize selectedToolTag=_selectedToolTag - In the implementation block
@property (nonatomic,retain) PUViewControllerSpec * parentSpec;                       //@synthesize parentSpec=_parentSpec - In the implementation block
-(void)updateViewConstraints;
-(PUViewControllerSpec *)parentSpec;
-(void)setParentSpec:(PUViewControllerSpec *)arg1 ;
-(NSArray *)toolButtons;
-(id)initWithLayoutDirection:(long long)arg1 style:(long long)arg2 ;
-(void)setToolButtons:(NSArray *)arg1 ;
-(void)createSelectionIndicatorView;
-(void)updateSelectionIndicatorConstraints;
-(void)setSelectedToolTag:(long long)arg1 ;
-(long long)selectedToolTag;
-(NSArray *)toolButtonConstraints;
-(double)interToolSpacing;
-(void)setToolButtonConstraints:(NSArray *)arg1 ;
-(UIView *)selectionIndicatorView;
-(void)setSelectionIndicatorView:(UIView *)arg1 ;
-(NSArray *)selectionIndicatorConstraints;
-(void)setSelectionIndicatorConstraints:(NSArray *)arg1 ;
-(void)setInterToolSpacing:(double)arg1 ;
-(PUPhotoEditToolPickerSpec *)toolPickerSpec;
-(void)setToolPickerSpec:(PUPhotoEditToolPickerSpec *)arg1 ;
-(void)viewDidLoad;
-(void)setStyle:(long long)arg1 ;
-(void)loadView;
-(void)setLayoutDirection:(long long)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)style;
-(long long)layoutDirection;
@end

