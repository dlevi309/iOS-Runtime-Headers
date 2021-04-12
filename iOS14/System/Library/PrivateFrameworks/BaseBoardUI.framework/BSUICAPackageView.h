/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAStateControllerDelegate.h>

@protocol CAStateControllerDelegate;
@class CAStateController, NSObject, CALayer, NSString, NSDictionary, NSArray;

@interface BSUICAPackageView : UIView <CAStateControllerDelegate> {

	CAStateController* _stateController;
	NSObject*<CAStateControllerDelegate> _stateControllerDelegate;
	CALayer* _rootLayer;
	CGSize _originalSize;
	NSString* _pendingCompletionToState;
	NSString* _pendingCompletionFromState;
	/*^block*/id _pendingCompletion;
	NSDictionary* _publishedObjectMap;

}

@property (nonatomic,copy,readonly) NSArray * publishedObjectNames; 
@property (assign,nonatomic,__weak) NSObject*<CAStateControllerDelegate> stateControllerDelegate; 
-(NSArray *)publishedObjectNames;
-(BOOL)setState:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)setState:(id)arg1 animated:(BOOL)arg2 transitionSpeed:(double)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)setState:(id)arg1 onLayer:(id)arg2 animated:(BOOL)arg3 transitionSpeed:(double)arg4 completion:(/*^block*/id)arg5 ;
-(NSObject*<CAStateControllerDelegate>)stateControllerDelegate;
-(void)setStateControllerDelegate:(NSObject*<CAStateControllerDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3 ;
-(id)publishedObjectWithName:(id)arg1 ;
-(BOOL)setState:(id)arg1 ;
-(id)initWithPackageName:(id)arg1 inBundle:(id)arg2 ;
-(void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3 ;
-(void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2 ;
@end

