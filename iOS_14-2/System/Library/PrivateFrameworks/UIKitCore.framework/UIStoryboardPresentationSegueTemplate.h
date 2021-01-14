/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@interface UIStoryboardPresentationSegueTemplate : UIStoryboardSegueTemplate {

	BOOL _useDefaultModalPresentationStyle;
	BOOL _useDefaultModalTransitionStyle;
	long long _modalPresentationStyle;
	long long _modalTransitionStyle;

}

@property (assign,nonatomic) BOOL useDefaultModalPresentationStyle;              //@synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle - In the implementation block
@property (assign,nonatomic) BOOL useDefaultModalTransitionStyle;                //@synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle - In the implementation block
@property (assign,nonatomic) long long modalPresentationStyle;                   //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) long long modalTransitionStyle;                     //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
-(long long)modalTransitionStyle;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(long long)modalPresentationStyle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(/*^block*/id)newDefaultPrepareHandlerForSegue:(id)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(BOOL)useDefaultModalPresentationStyle;
-(BOOL)useDefaultModalTransitionStyle;
-(void)setUseDefaultModalPresentationStyle:(BOOL)arg1 ;
-(void)setUseDefaultModalTransitionStyle:(BOOL)arg1 ;
@end

