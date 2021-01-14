/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStackView.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class _UIButtonBar, NSString;

@interface _UIButtonBarStackView : UIStackView <UIPointerInteractionDelegate> {

	_UIButtonBar* _buttonBar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)initWithCoder:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(id)initWithButtonBar:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
@end

