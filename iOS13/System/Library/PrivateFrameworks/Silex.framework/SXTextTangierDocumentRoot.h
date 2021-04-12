/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <TSReading/TSKDocumentRoot.h>

@class UIViewController, TSSStylesheet;

@interface SXTextTangierDocumentRoot : TSKDocumentRoot {

	UIViewController* _viewController;
	TSSStylesheet* _aStylesheet;

}

@property (nonatomic,readonly) TSSStylesheet * aStylesheet;                         //@synthesize aStylesheet=_aStylesheet - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)stylesheet;
-(TSSStylesheet *)aStylesheet;
@end

