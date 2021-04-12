/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <libobjc.A.dylib/CRKAnimationCoordinating.h>

@class UIView, NSString;

@interface _CRKCardViewControllerTransitionCoordinator : NSObject <CRKAnimationCoordinating> {

	BOOL _animated;
	/*^block*/id _initialSetup;
	/*^block*/id _finalSetup;
	/*^block*/id _animations;
	/*^block*/id _completion;
	UIView* _containerView;
	double _duration;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated;              //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;                //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,copy) id initialSetup;                                //@synthesize initialSetup=_initialSetup - In the implementation block
@property (nonatomic,copy) id finalSetup;                                  //@synthesize finalSetup=_finalSetup - In the implementation block
@property (nonatomic,copy) id animations;                                  //@synthesize animations=_animations - In the implementation block
@property (nonatomic,copy) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAnimated;
-(id)animations;
-(void)setCompletion:(id)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(id)init;
-(id)completion;
-(UIView *)containerView;
-(void)setAnimations:(id)arg1 ;
-(double)duration;
-(id)initialSetup;
-(void)setInitialSetup:(id)arg1 ;
-(id)finalSetup;
-(void)setFinalSetup:(id)arg1 ;
@end

