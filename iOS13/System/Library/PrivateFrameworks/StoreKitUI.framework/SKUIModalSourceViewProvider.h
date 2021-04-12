/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIModalSourceViewProviderDelegate;
@class UIView, UIBarButtonItem;

@interface SKUIModalSourceViewProvider : NSObject {

	id<SKUIModalSourceViewProviderDelegate> _delegate;
	BOOL _hideOriginalSourceView;
	UIView* _originalSourceView;
	UIBarButtonItem* _sourceButtonBarItem;
	id _userInfo;
	UIView* _sourceView;

}

@property (assign,nonatomic,__weak) id<SKUIModalSourceViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * originalSourceView;                                          //@synthesize originalSourceView=_originalSourceView - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                  //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * sourceButtonBarItem;                                //@synthesize sourceButtonBarItem=_sourceButtonBarItem - In the implementation block
@property (nonatomic,retain) id userInfo;                                                          //@synthesize userInfo=_userInfo - In the implementation block
-(id)userInfo;
-(id<SKUIModalSourceViewProviderDelegate>)delegate;
-(void)setDelegate:(id<SKUIModalSourceViewProviderDelegate>)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setOriginalSourceView:(UIView *)arg1 ;
-(void)setSourceButtonBarItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)sourceButtonBarItem;
-(UIView *)originalSourceView;
-(id)animationView;
-(void)hideOriginalSourceView;
-(void)showOriginalSourceView;
@end

