/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@interface OBBaseWelcomeController : UIViewController {

	unsigned long long _templateType;

}

@property (assign,nonatomic) unsigned long long templateType;              //@synthesize templateType=_templateType - In the implementation block
+(CGSize)preferredContentSize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)navigationItem;
-(void)updateDirectionalLayoutMargins;
-(void)_presentationStyleValidationCheck;
-(NSDirectionalEdgeInsets)insetsForTemplateType:(unsigned long long)arg1 ;
-(long long)navigationBarScrollToEdgeBehavior;
-(void)_applyChromelessToBar:(long long)arg1 navigationItem:(id)arg2 ;
-(double)autoScrollEdgeTransitionDistance;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(unsigned long long)templateType;
-(void)setTemplateType:(unsigned long long)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(NSDirectionalEdgeInsets)directionalLayoutMargins;
@end

