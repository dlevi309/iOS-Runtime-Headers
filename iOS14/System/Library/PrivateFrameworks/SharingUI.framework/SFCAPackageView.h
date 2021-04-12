/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAStateControllerDelegate.h>

@class CAStateController, NSMutableArray, NSString, CALayer;

@interface SFCAPackageView : UIView <CAStateControllerDelegate> {

	float _duration;
	CAStateController* _stateController;
	NSMutableArray* _completionHandlers;

}

@property (retain) CAStateController * stateController;                    //@synthesize stateController=_stateController - In the implementation block
@property (readonly) NSMutableArray * completionHandlers;                  //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (getter=isInitialState,readonly) BOOL initialState; 
@property (copy,readonly) NSString * stateName; 
@property (readonly) CALayer * packageRootLayer; 
@property (readonly) float duration;                                       //@synthesize duration=_duration - In the implementation block
+(id)keyPathsForValuesAffectingPackageRootLayer;
-(unsigned long long)statesCount;
-(CAStateController *)stateController;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3 ;
-(NSMutableArray *)completionHandlers;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stateName;
-(float)duration;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setStateName:(NSString *)arg1 ;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)setInitialState;
-(void)animateToStateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_stcaPackageViewCommonInit;
-(id)_newStateControllerWithSuperlayer:(id)arg1 ;
-(void)_changeAppearance;
-(CALayer *)packageRootLayer;
-(BOOL)isInitialState;
-(id)_getStateWithName:(id)arg1 ;
-(void)animateToInitialStateWithCompletionHandler:(/*^block*/id)arg1 ;
@end

