/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UIView, UIButton, UIColor, RUIWebContainerView;

@interface RemoteUITableViewCell : UITableViewCell {

	UIImageView* _invalidRowView;
	BOOL _leftAlignDetailLabel;
	BOOL _didSetupEditableTextFieldLargeText;
	long long _remoteUIAccessoryType;
	UIView* _remoteUIAccessoryView;
	UIButton* _detailLinkButton;
	/*^block*/id _detailLinkHandler;
	UIColor* _accessoryColor;
	BOOL _forceFullSizeDetailLabel;
	BOOL _activityIndicatorVisible;
	RUIWebContainerView* _webContainerView;
	CGSize _imageSize;

}

@property (assign,nonatomic) BOOL forceFullSizeDetailLabel;                       //@synthesize forceFullSizeDetailLabel=_forceFullSizeDetailLabel - In the implementation block
@property (assign,nonatomic) BOOL leftAlignDetailLabel;                           //@synthesize leftAlignDetailLabel=_leftAlignDetailLabel - In the implementation block
@property (assign,nonatomic) long long remoteUIAccessoryType;                     //@synthesize remoteUIAccessoryType=_remoteUIAccessoryType - In the implementation block
@property (nonatomic,retain) UIView * remoteUIAccessoryView;                      //@synthesize remoteUIAccessoryView=_remoteUIAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL activityIndicatorVisible;                       //@synthesize activityIndicatorVisible=_activityIndicatorVisible - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                    //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) RUIWebContainerView * webContainerView;              //@synthesize webContainerView=_webContainerView - In the implementation block
-(CGSize)imageSize;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)editableTextField;
-(void)setImageSize:(CGSize)arg1 ;
-(double)webViewWidth;
-(void)setDetailLinkText:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setActivityIndicatorVisible:(BOOL)arg1 ;
-(void)_setRemoteUIAccessoryType:(long long)arg1 withColor:(id)arg2 ;
-(void)_accessoriesChanged;
-(void)_showActivityIndicatorAccessory;
-(void)_detailLinkPressed;
-(long long)remoteUIAccessoryType;
-(void)setRemoteUIAccessoryType:(long long)arg1 ;
-(void)setRemoteUIAccessoryView:(UIView *)arg1 ;
-(void)setHTMLData:(id)arg1 sourceURL:(id)arg2 delegate:(id)arg3 ;
-(id)detailLinkButton;
-(void)setRowInvalid:(BOOL)arg1 ;
-(BOOL)forceFullSizeDetailLabel;
-(void)setForceFullSizeDetailLabel:(BOOL)arg1 ;
-(BOOL)leftAlignDetailLabel;
-(void)setLeftAlignDetailLabel:(BOOL)arg1 ;
-(UIView *)remoteUIAccessoryView;
-(BOOL)activityIndicatorVisible;
-(RUIWebContainerView *)webContainerView;
-(void)setWebContainerView:(RUIWebContainerView *)arg1 ;
@end

