/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UISpringLoadedInteractionContext_Internal.h>

@class UIView, UISpringLoadedGestureRecognizer, NSString;

@interface UISpringLoadedInteractionContextImpl : NSObject <UISpringLoadedInteractionContext_Internal> {

	id targetItem;
	UIView* targetView;
	UIView* overrideTargetView;
	id overrideTargetItem;
	long long _state;
	UISpringLoadedGestureRecognizer* _currentRecognizer;

}

@property (assign,nonatomic) long long state;                                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) UISpringLoadedGestureRecognizer * currentRecognizer;              //@synthesize currentRecognizer=_currentRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * targetView; 
@property (nonatomic,retain) id targetItem; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@property (nonatomic,retain) UIView * overrideTargetView; 
@property (nonatomic,retain) id overrideTargetItem; 
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(UIView *)targetView;
-(id<UIDropSession>)dropSession;
-(id)overrideTargetItem;
-(void)setOverrideTargetView:(UIView *)arg1 ;
-(void)setOverrideTargetItem:(id)arg1 ;
-(UIView *)overrideTargetView;
-(void)setTargetView:(UIView *)arg1 ;
-(id)targetItem;
-(void)setTargetItem:(id)arg1 ;
-(UISpringLoadedGestureRecognizer *)currentRecognizer;
-(void)setCurrentRecognizer:(UISpringLoadedGestureRecognizer *)arg1 ;
@end

