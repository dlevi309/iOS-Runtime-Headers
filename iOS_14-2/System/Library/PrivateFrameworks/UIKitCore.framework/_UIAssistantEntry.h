/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIPointerInteractionDelegate.h>

@protocol UIPointerInteractionDelegate;
@class UIView, NSString;

@interface _UIAssistantEntry : NSObject <UIPointerInteractionDelegate> {

	UIView*<UIPointerInteractionDelegate> _view;

}

@property (assign,nonatomic,__weak) UIView*<UIPointerInteractionDelegate> view;              //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)setView:(UIView*<UIPointerInteractionDelegate>)arg1 ;
-(UIView*<UIPointerInteractionDelegate>)view;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(id)initWithView:(id)arg1 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
@end

