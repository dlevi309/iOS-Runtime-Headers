/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@protocol NUArticleBarButtonItemManagerDelegate;
#import <NewsUI/NewsUI-Structs.h>
@class UIViewController, NUArticleNextButton, UIBarButtonItem;

@interface NUArticleBarButtonItemManager : NSObject {

	id<NUArticleBarButtonItemManagerDelegate> _delegate;
	UIViewController* _viewController;
	NUArticleNextButton* _nextButton;
	UIBarButtonItem* _shareBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _nextBarButtonItem;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;                             //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) NUArticleNextButton * nextButton;                                     //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareBarButtonItem;                                   //@synthesize shareBarButtonItem=_shareBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneBarButtonItem;                                    //@synthesize doneBarButtonItem=_doneBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * nextBarButtonItem;                                  //@synthesize nextBarButtonItem=_nextBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) id<NUArticleBarButtonItemManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NUArticleBarButtonItemManagerDelegate>)delegate;
-(void)setDelegate:(id<NUArticleBarButtonItemManagerDelegate>)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(NUArticleNextButton *)nextButton;
-(void)sizeBarButtonItemsForTraitCollection:(id)arg1 ;
-(void)positionBarButtonItemsForTraitCollection:(id)arg1 ;
-(void)applyPageStyleToNextBarButtonItem:(id)arg1 ;
-(void)doNext:(id)arg1 ;
-(CGRect)adjustedFrameForNextArticleButtonForTraitCollection:(id)arg1 ;
-(CGRect)adjustedFrameForDoneBarButtonItemForTraitCollection:(id)arg1 ;
-(UIBarButtonItem *)doneBarButtonItem;
-(CGRect)adjustedFrameForShareBarButtonItemForTraitCollection:(id)arg1 ;
-(UIBarButtonItem *)shareBarButtonItem;
-(id)createShareBarButtonItem;
-(void)setShareBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)createDoneBarButtonItem;
-(void)setDoneBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)createFlexibleSpacerBarButtonItem;
-(UIBarButtonItem *)nextBarButtonItem;
-(void)doShare:(id)arg1 ;
-(void)doDone:(id)arg1 ;
@end

