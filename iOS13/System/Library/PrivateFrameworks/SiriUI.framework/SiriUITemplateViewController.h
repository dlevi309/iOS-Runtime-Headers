/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKitCore/UIViewController.h>

@protocol SiriUITemplateModel, SiriUITemplateViewControllerDelegate;
@interface SiriUITemplateViewController : UIViewController {

	BOOL _active;
	BOOL _compressed;
	id<SiriUITemplateModel> _templateModel;
	id<SiriUITemplateViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<SiriUITemplateModelPrivate> templateModelPrivate; 
@property (assign,nonatomic,__weak) id<SiriUITemplateViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<SiriUITemplateView> view; 
@property (nonatomic,retain) id<SiriUITemplateModel> templateModel;                                 //@synthesize templateModel=_templateModel - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                           //@synthesize active=_active - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;                                   //@synthesize compressed=_compressed - In the implementation block
+(id)templateViewControllerForTemplateModel:(id)arg1 ;
-(id<SiriUITemplateViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SiriUITemplateViewControllerDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)setCompressed:(BOOL)arg1 ;
-(BOOL)isCompressed;
-(void)prepareForDismissal;
-(id)_initWithTemplateModel:(id)arg1 ;
-(id<SiriUITemplateModelPrivate>)templateModelPrivate;
-(id<SiriUITemplateModel>)templateModel;
-(void)setTemplateModel:(id<SiriUITemplateModel>)arg1 ;
@end

