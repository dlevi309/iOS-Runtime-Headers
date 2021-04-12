/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUINavigationTransitioning.h>

@protocol SiriUINavigationTransitioning;
@class NSMutableArray, UINavigationController, NSArray, NSString;

@interface SiriUIMultiNavigationTransitionController : NSObject <SiriUINavigationTransitioning> {

	long long _operation;
	id<SiriUINavigationTransitioning> _primaryTransitionController;
	NSMutableArray* _mutableAdditionalCoordinationControllers;
	UINavigationController* _navigationController;

}

@property (getter=_mutableAdditionalCoordinationControllers,nonatomic,retain) NSMutableArray * mutableAdditionalCoordinationControllers;                      //@synthesize mutableAdditionalCoordinationControllers=_mutableAdditionalCoordinationControllers - In the implementation block
@property (assign,setter=_setNavigationController:,getter=_navigationController,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) id<SiriUINavigationTransitioning> primaryTransitionController;                                                                 //@synthesize primaryTransitionController=_primaryTransitionController - In the implementation block
@property (nonatomic,copy,readonly) NSArray * additionalCoordinationControllers; 
@property (nonatomic,readonly) id<UIViewControllerAnimatedTransitioning> animationController; 
@property (assign,nonatomic) long long operation;                                                                                                             //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIViewControllerAnimatedTransitioning>)animationController;
-(void)setOperation:(long long)arg1 ;
-(long long)operation;
-(id)_navigationController;
-(id)interactionControllerForAnimationController:(id)arg1 ;
-(void)coordinateAdditionalTransitionsWithTransitionCoordinator:(id)arg1 ;
-(id)_mutableAdditionalCoordinationControllers;
-(void)configureWithNavigationController:(id)arg1 ;
-(id<SiriUINavigationTransitioning>)primaryTransitionController;
-(NSArray *)additionalCoordinationControllers;
-(void)_setNavigationController:(id)arg1 ;
-(id)initWithPrimaryTransitionController:(id)arg1 ;
-(void)addAdditionalCoordinationController:(id)arg1 ;
-(void)setMutableAdditionalCoordinationControllers:(NSMutableArray *)arg1 ;
@end

