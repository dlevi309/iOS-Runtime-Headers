/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setViewController:(UIViewController *)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(UIViewController *)viewController;
-(id)stylesheet;
-(TSSStylesheet *)aStylesheet;
@end

