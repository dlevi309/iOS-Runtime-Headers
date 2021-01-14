/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextLinkInteraction;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextItemInteractionInteraction, UIView;

@interface _UITextLinkInteractionSession : NSObject {

	UITextItemInteractionInteraction* _interaction;
	UIView*<UITextLinkInteraction> _linkInteractionView;

}
-(BOOL)_allowItemInteractions;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(id)initWithTextItemInteraction:(id)arg1 ;
-(BOOL)canInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
@end

