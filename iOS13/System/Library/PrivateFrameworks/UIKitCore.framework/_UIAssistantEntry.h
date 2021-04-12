/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIPointerInteractionDelegate.h>

@protocol UIPointerInteractionDelegate;
@class UIView, NSString;

@interface _UIAssistantEntry : NSObject <UIPointerInteractionDelegate> {

	UIView*<UIPointerInteractionDelegate> _view;

}

@property (nonatomic,retain) UIView*<UIPointerInteractionDelegate> view;              //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView*<UIPointerInteractionDelegate>)view;
-(void)setView:(UIView*<UIPointerInteractionDelegate>)arg1 ;
-(id)initWithView:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
@end

