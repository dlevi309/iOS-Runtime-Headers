/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) UIView * overrideTargetView; 
@property (nonatomic,retain) id overrideTargetItem; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@property (nonatomic,retain) UIView * targetView; 
@property (nonatomic,retain) id targetItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIDropSession>)dropSession;
-(UIView *)targetView;
-(CGPoint)locationInView:(id)arg1 ;
-(UISpringLoadedGestureRecognizer *)currentRecognizer;
-(void)setCurrentRecognizer:(UISpringLoadedGestureRecognizer *)arg1 ;
-(id)targetItem;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setTargetView:(UIView *)arg1 ;
-(id)overrideTargetItem;
-(void)setOverrideTargetView:(UIView *)arg1 ;
-(void)setOverrideTargetItem:(id)arg1 ;
-(UIView *)overrideTargetView;
-(void)setTargetItem:(id)arg1 ;
@end

