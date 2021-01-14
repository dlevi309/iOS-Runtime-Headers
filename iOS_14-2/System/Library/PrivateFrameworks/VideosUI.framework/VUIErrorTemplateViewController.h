/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>

@class IKViewElement, VUIErrorView;

@interface VUIErrorTemplateViewController : UIViewController {

	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) VUIErrorView * errorView; 
-(VUIErrorView *)errorView;
-(void)loadView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)updateWithTemplateElement:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
@end

