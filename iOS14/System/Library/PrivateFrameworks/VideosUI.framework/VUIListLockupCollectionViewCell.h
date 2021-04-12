/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@class IKViewElement, VUIListLockupCollectionViewCellView, VUIListLockupCollectionViewCellLayout;

@interface VUIListLockupCollectionViewCell : VUIListCollectionViewCell {

	/*^block*/id _buttonSelectionHandler;
	IKViewElement* _viewElement;
	IKViewElement* _primaryButtonElement;
	IKViewElement* _secondaryButtonElement;
	VUIListLockupCollectionViewCellView* _listCellView;
	VUIListLockupCollectionViewCellLayout* _layout;

}

@property (nonatomic,retain) IKViewElement * viewElement;                                     //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * primaryButtonElement;                            //@synthesize primaryButtonElement=_primaryButtonElement - In the implementation block
@property (nonatomic,retain) IKViewElement * secondaryButtonElement;                          //@synthesize secondaryButtonElement=_secondaryButtonElement - In the implementation block
@property (nonatomic,retain) VUIListLockupCollectionViewCellView * listCellView;              //@synthesize listCellView=_listCellView - In the implementation block
@property (nonatomic,retain) VUIListLockupCollectionViewCellLayout * layout;                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,copy) id buttonSelectionHandler;                                         //@synthesize buttonSelectionHandler=_buttonSelectionHandler - In the implementation block
+(id)configureWithElement:(id)arg1 existingView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLayout:(VUIListLockupCollectionViewCellLayout *)arg1 ;
-(VUIListLockupCollectionViewCellLayout *)layout;
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

