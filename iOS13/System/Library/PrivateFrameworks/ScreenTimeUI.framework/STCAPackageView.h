/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
*/

#import <ScreenTimeUI/ScreenTimeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAStateControllerDelegate.h>

@class CAStateController, NSMutableArray, NSString, CALayer;

@interface STCAPackageView : UIView <CAStateControllerDelegate> {

	CAStateController* _stateController;
	NSMutableArray* _completionHandlers;

}

@property (retain) CAStateController * stateController;                    //@synthesize stateController=_stateController - In the implementation block
@property (readonly) NSMutableArray * completionHandlers;                  //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (getter=isInitialState,readonly) BOOL initialState; 
@property (copy,readonly) NSString * stateName; 
@property (readonly) CALayer * packageRootLayer; 
+(id)keyPathsForValuesAffectingPackageRootLayer;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSMutableArray *)completionHandlers;
-(void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3 ;
-(CAStateController *)stateController;
-(void)_stcaPackageViewCommonInit;
-(id)_newStateControllerWithSuperlayer:(id)arg1 ;
-(void)_changeAppearance;
-(CALayer *)packageRootLayer;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)setStateName:(NSString *)arg1 ;
-(BOOL)isInitialState;
-(NSString *)stateName;
-(id)_getStateWithName:(id)arg1 ;
-(void)setInitialState;
-(void)animateToInitialStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)animateToStateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
