/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RUIFooterElement *)footer;
-(void)setHeader:(RUIHeaderElement *)arg1 ;
-(RUIObjectModel *)objectModel;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(RUIHeaderElement *)header;
-(id)spinnerView;
-(void)setFooter:(RUIFooterElement *)arg1 ;
-(void)setSpinnerColor:(UIColor *)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(UIColor *)spinnerColor;
-(void)viewDidLayout;
@end

