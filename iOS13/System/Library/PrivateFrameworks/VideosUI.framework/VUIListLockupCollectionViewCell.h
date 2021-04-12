/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@class IKViewElement, VUIListLockupCollectionViewCellView;

@interface VUIListLockupCollectionViewCell : VUIListCollectionViewCell {

	/*^block*/id _buttonSelectionHandler;
	IKViewElement* _viewElement;
	IKViewElement* _primaryButtonElement;
	IKViewElement* _secondaryButtonElement;
	VUIListLockupCollectionViewCellView* _listCellView;

}

@property (nonatomic,retain) IKViewElement * viewElement;                                     //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * primaryButtonElement;                            //@synthesize primaryButtonElement=_primaryButtonElement - In the implementation block
@property (nonatomic,retain) IKViewElement * secondaryButtonElement;                          //@synthesize secondaryButtonElement=_secondaryButtonElement - In the implementation block
@property (nonatomic,retain) VUIListLockupCollectionViewCellView * listCellView;              //@synthesize listCellView=_listCellView - In the implementation block
@property (nonatomic,copy) id buttonSelectionHandler;                                         //@synthesize buttonSelectionHandler=_buttonSelectionHandler - In the implementation block
+(id)configureWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIListLockupCollectionViewCellView *)listCellView;
-(void)setListCellView:(VUIListLockupCollectionViewCellView *)arg1 ;
-(void)setPrimaryButtonElement:(IKViewElement *)arg1 ;
-(void)setSecondaryButtonElement:(IKViewElement *)arg1 ;
-(id)buttonSelectionHandler;
-(void)setButtonSelectionHandler:(id)arg1 ;
-(IKViewElement *)primaryButtonElement;
-(IKViewElement *)secondaryButtonElement;
@end

