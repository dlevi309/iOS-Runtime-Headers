/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(void)setSourceView:(UIView *)arg1 ;
-(id<SKUIModalSourceViewProviderDelegate>)delegate;
-(UIView *)sourceView;
-(void)setDelegate:(id<SKUIModalSourceViewProviderDelegate>)arg1 ;
-(id)animationView;
-(void)setOriginalSourceView:(UIView *)arg1 ;
-(void)setSourceButtonBarItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)sourceButtonBarItem;
-(UIView *)originalSourceView;
-(void)hideOriginalSourceView;
-(void)showOriginalSourceView;
@end

