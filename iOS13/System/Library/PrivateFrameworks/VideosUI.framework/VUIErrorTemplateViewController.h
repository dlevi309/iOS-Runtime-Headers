/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>

@class IKViewElement, VUIErrorView;

@interface VUIErrorTemplateViewController : UIViewController {

	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) VUIErrorView * errorView; 
-(void)loadView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIErrorView *)errorView;
-(void)updateWithViewElement:(id)arg1 ;
-(void)updateWithTemplateElement:(id)arg1 ;
@end

