/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver.h>

@class NSLayoutConstraint, UIInterfaceAction, NSString;

@interface _UIInterfaceActionImagePropertyView : UIImageView <UIInterfaceActionDisplayPropertyObserver> {

	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageHeightConstraint;
	UIInterfaceAction* _action;
	NSString* _imageProperty;

}

@property (nonatomic,readonly) UIInterfaceAction * action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSString * imageProperty;                       //@synthesize imageProperty=_imageProperty - In the implementation block
@property (nonatomic,readonly) BOOL isUsedToOccupySpaceIfNoImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tintColorDidChange;
-(void)setImage:(id)arg1 ;
-(id)_visualStyle;
-(UIInterfaceAction *)action;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(id)initWithAction:(id)arg1 imageProperty:(id)arg2 ;
-(CGSize)_sizeToOccupy;
-(NSString *)imageProperty;
-(id)_interfaceActionViewState;
-(BOOL)isUsedToOccupySpaceIfNoImage;
-(void)_applyVisualStyleToImageView;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(void)_applyVisualStyle;
-(void)_reloadImageContent;
-(void)dealloc;
@end

