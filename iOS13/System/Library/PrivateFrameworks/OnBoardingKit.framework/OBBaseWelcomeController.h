/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@interface OBBaseWelcomeController : UIViewController {

	unsigned long long _templateType;

}

@property (assign,nonatomic) unsigned long long templateType;              //@synthesize templateType=_templateType - In the implementation block
+(CGSize)preferredContentSize;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSDirectionalEdgeInsets)directionalLayoutMargins;
-(id)navigationItem;
-(unsigned long long)templateType;
-(void)setTemplateType:(unsigned long long)arg1 ;
-(void)updateDirectionalLayoutMargins;
-(long long)navigationBarScrollToEdgeBehavior;
-(void)_applyChromelessToBar:(long long)arg1 navigationItem:(id)arg2 ;
-(void)_presentationStyleValidationCheck;
-(NSDirectionalEdgeInsets)insetsForTemplateType:(unsigned long long)arg1 ;
-(double)autoScrollEdgeTransitionDistance;
@end

