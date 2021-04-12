/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PUCropAspectViewControllerDelegate;
@class PUCropAspect, UIView, UIScrollView, NSArray, PUCropToolControllerSpec;

@interface PUCropAspectViewController : UIViewController {

	PUCropAspect* _currentCropAspect;
	id<PUCropAspectViewControllerDelegate> _delegate;
	long long _aspectOrientation;
	long long _layoutOrientation;
	UIView* _scrollExtraLeftView;
	UIView* _scrollViewContainer;
	UIView* _buttonContainer;
	UIScrollView* _scrollView;
	NSArray* _aspectButtons;
	NSArray* _allAspectRatios;
	PUCropToolControllerSpec* _spec;
	NSArray* _aspectConstraints;
	CGSize _currentCropSize;
	CGSize _originalSize;

}

@property (nonatomic,retain) UIView * scrollViewContainer;                                        //@synthesize scrollViewContainer=_scrollViewContainer - In the implementation block
@property (nonatomic,retain) UIView * buttonContainer;                                            //@synthesize buttonContainer=_buttonContainer - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                           //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSArray * aspectButtons;                                             //@synthesize aspectButtons=_aspectButtons - In the implementation block
@property (nonatomic,retain) NSArray * allAspectRatios;                                           //@synthesize allAspectRatios=_allAspectRatios - In the implementation block
@property (assign,nonatomic) CGSize originalSize;                                                 //@synthesize originalSize=_originalSize - In the implementation block
@property (nonatomic,retain) PUCropToolControllerSpec * spec;                                     //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) NSArray * aspectConstraints;                                         //@synthesize aspectConstraints=_aspectConstraints - In the implementation block
@property (assign,nonatomic) CGSize currentCropSize;                                              //@synthesize currentCropSize=_currentCropSize - In the implementation block
@property (nonatomic,retain) PUCropAspect * currentCropAspect;                                    //@synthesize currentCropAspect=_currentCropAspect - In the implementation block
@property (assign,nonatomic,__weak) id<PUCropAspectViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long aspectOrientation;                                         //@synthesize aspectOrientation=_aspectOrientation - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                                         //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (nonatomic,retain) UIView * scrollExtraLeftView;                                        //@synthesize scrollExtraLeftView=_scrollExtraLeftView - In the implementation block
-(void)setSpec:(PUCropToolControllerSpec *)arg1 ;
-(long long)layoutOrientation;
-(UIView *)buttonContainer;
-(id<PUCropAspectViewControllerDelegate>)delegate;
-(void)setOriginalSize:(CGSize)arg1 ;
-(PUCropToolControllerSpec *)spec;
-(void)setDelegate:(id<PUCropAspectViewControllerDelegate>)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)setButtonContainer:(UIView *)arg1 ;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(CGSize)originalSize;
-(UIScrollView *)scrollView;
-(id)initWithLayoutOrientation:(long long)arg1 originalSize:(CGSize)arg2 currentSize:(CGSize)arg3 currentCropAspect:(id)arg4 spec:(id)arg5 ;
-(void)setAspectOrientation:(long long)arg1 ;
-(void)setCurrentCropAspect:(PUCropAspect *)arg1 ;
-(void)updateAspectButtonSelection;
-(id)matchingCropAspectTo:(id)arg1 ;
-(void)updateAspectButtons;
-(void)updateAspectConstraints;
-(void)setScrollExtraLeftView:(UIView *)arg1 ;
-(void)aspectButtonPressed:(id)arg1 ;
-(CGSize)currentCropSize;
-(void)setCurrentCropSize:(CGSize)arg1 ;
-(PUCropAspect *)currentCropAspect;
-(long long)aspectOrientation;
-(UIView *)scrollExtraLeftView;
-(UIView *)scrollViewContainer;
-(void)setScrollViewContainer:(UIView *)arg1 ;
-(NSArray *)aspectButtons;
-(void)setAspectButtons:(NSArray *)arg1 ;
-(NSArray *)allAspectRatios;
-(void)setAllAspectRatios:(NSArray *)arg1 ;
-(NSArray *)aspectConstraints;
-(void)setAspectConstraints:(NSArray *)arg1 ;
@end
