/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextContextMenuInteractionBase.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class UIContextMenuInteraction, NSString;

@interface _UIContextMenuInteractionBasedTextContextInteraction : _UITextContextMenuInteractionBase <UIContextMenuInteractionDelegate> {

	UIContextMenuInteraction* _contextMenuInteraction;

}

@property (nonatomic,retain) UIContextMenuInteraction * contextMenuInteraction;              //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(void)_contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)didMoveToView:(id)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)setContextMenuInteraction:(UIContextMenuInteraction *)arg1 ;
@end

