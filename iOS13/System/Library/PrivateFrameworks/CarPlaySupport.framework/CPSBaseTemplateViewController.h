/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CPBaseTemplateProviding.h>
#import <libobjc.A.dylib/CPSBaseTemplateViewController.h>
@class CPTemplate, NAFuture;


@protocol CPSBaseTemplateViewController <NSObject>
@property (nonatomic,retain) CPTemplate * associatedTemplate; 
@property (nonatomic,retain) id<CPTemplateDelegate> templateDelegate; 
@property (nonatomic,readonly) NAFuture * templateProviderFuture; 
@required
-(id<CPTemplateDelegate>)templateDelegate;
-(void)setTemplateDelegate:(id)arg1;
-(NAFuture *)templateProviderFuture;
-(CPTemplate *)associatedTemplate;
-(void)setAssociatedTemplate:(id)arg1;

@end

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol CPTemplateDelegate, CPSTemplateViewControllerDelegate;
@class CPTemplate, NAFuture, UITapGestureRecognizer, NSString;

@interface CPSBaseTemplateViewController : UIViewController <CPSButtonDelegate, UIGestureRecognizerDelegate, CPBaseTemplateProviding, CPSBaseTemplateViewController, BSInvalidatable> {

	BOOL _isPopping;
	BOOL _didDisappear;
	NAFuture* _templateProviderFuture;
	CPTemplate* _associatedTemplate;
	id<CPTemplateDelegate> _templateDelegate;
	id<CPSTemplateViewControllerDelegate> _viewControllerDelegate;
	UITapGestureRecognizer* _backGestureRecognizer;

}

@property (assign,nonatomic) BOOL isPopping;                                                                   //@synthesize isPopping=_isPopping - In the implementation block
@property (assign,nonatomic) BOOL didDisappear;                                                                //@synthesize didDisappear=_didDisappear - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * backGestureRecognizer;                                   //@synthesize backGestureRecognizer=_backGestureRecognizer - In the implementation block
@property (nonatomic,retain) CPTemplate * associatedTemplate;                                                  //@synthesize associatedTemplate=_associatedTemplate - In the implementation block
@property (nonatomic,retain) id<CPTemplateDelegate> templateDelegate;                                          //@synthesize templateDelegate=_templateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CPSTemplateViewControllerDelegate> viewControllerDelegate;              //@synthesize viewControllerDelegate=_viewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NAFuture * templateProviderFuture;                                              //@synthesize templateProviderFuture=_templateProviderFuture - In the implementation block
-(void)invalidate;
-(void)_cleanup;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isPopping;
-(id<CPSTemplateViewControllerDelegate>)viewControllerDelegate;
-(void)setViewControllerDelegate:(id<CPSTemplateViewControllerDelegate>)arg1 ;
-(BOOL)didDisappear;
-(void)setDidDisappear:(BOOL)arg1 ;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(void)setHostBackButton:(id)arg1 ;
-(void)setControl:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setBarButton:(id)arg1 image:(id)arg2 ;
-(void)setBarButton:(id)arg1 title:(id)arg2 ;
-(NAFuture *)templateProviderFuture;
-(void)didSelectButton:(id)arg1 ;
-(id)initWithTemplate:(id)arg1 templateDelegate:(id)arg2 ;
-(CPTemplate *)associatedTemplate;
-(void)_viewDidLoad;
-(void)_dismissTemplateViewController;
-(void)_backGestureFired:(id)arg1 ;
-(void)setBackGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)backGestureRecognizer;
-(void)_cps_viewControllerWasPopped;
-(void)setAssociatedTemplate:(CPTemplate *)arg1 ;
-(void)setIsPopping:(BOOL)arg1 ;
-(void)_updateLeadingBarButtons;
-(void)_updateTrailingBarButtons;
-(void)_addGestureRecognizerIfNecessary;
-(id)_barButtonItemForIdentifier:(id)arg1 ;
@end

