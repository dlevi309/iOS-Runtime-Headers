/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RUIElement.h>

@class UIView, UIActivityIndicatorView, UILabel, RUIHeaderView, RemoteUISectionFooter, RUIObjectModel, UIColor, RUIHeaderElement, RUIFooterElement;

@interface RUISpinnerView : RUIElement {

	UIView* _view;
	UIActivityIndicatorView* _spinner;
	UILabel* _label;
	RUIHeaderView* _headerView;
	RemoteUISectionFooter* _footerView;
	RUIObjectModel* _objectModel;
	UIColor* _spinnerColor;
	RUIHeaderElement* _header;
	RUIFooterElement* _footer;

}

@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) UIColor * spinnerColor;                           //@synthesize spinnerColor=_spinnerColor - In the implementation block
@property (nonatomic,retain) RUIHeaderElement * header;                        //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUIFooterElement * footer;                        //@synthesize footer=_footer - In the implementation block
-(RUIHeaderElement *)header;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setHeader:(RUIHeaderElement *)arg1 ;
-(RUIFooterElement *)footer;
-(void)setFooter:(RUIFooterElement *)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(void)viewDidLayout;
-(RUIObjectModel *)objectModel;
-(id)spinnerView;
-(UIColor *)spinnerColor;
-(void)setSpinnerColor:(UIColor *)arg1 ;
@end

