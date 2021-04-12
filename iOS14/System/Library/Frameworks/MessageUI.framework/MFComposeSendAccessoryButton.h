/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class UIImage, NSString;

@interface MFComposeSendAccessoryButton : UIButton <_UICursorInteractionDelegate> {

	UIImage* _sendImage;

}

@property (nonatomic,retain) UIImage * sendImage;                   //@synthesize sendImage=_sendImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithType:(long long)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_preview;
-(UIImage *)sendImage;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setupSendImage:(BOOL)arg1 ;
-(void)setSendImage:(UIImage *)arg1 ;
-(id)_cursorForTargetedPreview:(id)arg1 ;
@end

