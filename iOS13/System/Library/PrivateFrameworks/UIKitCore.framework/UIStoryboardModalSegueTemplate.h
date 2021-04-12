/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate {

	BOOL _useDefaultModalPresentationStyle;
	BOOL _useDefaultModalTransitionStyle;
	long long _modalPresentationStyle;
	long long _modalTransitionStyle;

}

@property (assign,nonatomic) BOOL useDefaultModalPresentationStyle;              //@synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle - In the implementation block
@property (assign,nonatomic) BOOL useDefaultModalTransitionStyle;                //@synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle - In the implementation block
@property (assign,nonatomic) long long modalPresentationStyle;                   //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) long long modalTransitionStyle;                     //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(long long)modalPresentationStyle;
-(long long)modalTransitionStyle;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(BOOL)useDefaultModalPresentationStyle;
-(BOOL)useDefaultModalTransitionStyle;
-(void)setUseDefaultModalPresentationStyle:(BOOL)arg1 ;
-(void)setUseDefaultModalTransitionStyle:(BOOL)arg1 ;
@end

