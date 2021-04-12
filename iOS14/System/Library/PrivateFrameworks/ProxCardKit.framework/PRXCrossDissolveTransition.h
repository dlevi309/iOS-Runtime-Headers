/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface PRXCrossDissolveTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	/*^block*/id _additionalAnimations;
	long long _cardStyle;
	CGSize _maxSize;

}

@property (nonatomic,copy) id additionalAnimations;                 //@synthesize additionalAnimations=_additionalAnimations - In the implementation block
@property (assign,nonatomic) long long cardStyle;                   //@synthesize cardStyle=_cardStyle - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                        //@synthesize maxSize=_maxSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMaxSize:(CGSize)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setCardStyle:(long long)arg1 ;
-(CGSize)maxSize;
-(long long)cardStyle;
-(void)setAdditionalAnimations:(id)arg1 ;
-(id)additionalAnimations;
@end

