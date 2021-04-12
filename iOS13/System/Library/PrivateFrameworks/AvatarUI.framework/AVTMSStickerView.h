/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <Messages/MSStickerView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol AVTMSStickerViewDelegate, AVTStickerDisclosureValidationDelegate;
@class NSString;

@interface AVTMSStickerView : MSStickerView <UIGestureRecognizerDelegate> {

	BOOL _allowsPeel;
	id<AVTMSStickerViewDelegate> _delegate;
	id<AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;

}

@property (assign,nonatomic) BOOL allowsPeel;                                                                             //@synthesize allowsPeel=_allowsPeel - In the implementation block
@property (assign,nonatomic,__weak) id<AVTMSStickerViewDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;              //@synthesize disclosureValidationDelegate=_disclosureValidationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AVTMSStickerViewDelegate>)delegate;
-(void)setDelegate:(id<AVTMSStickerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(BOOL)allowsPeel;
-(void)setAllowsPeel:(BOOL)arg1 ;
-(id<AVTStickerDisclosureValidationDelegate>)disclosureValidationDelegate;
-(void)setDisclosureValidationDelegate:(id<AVTStickerDisclosureValidationDelegate>)arg1 ;
@end

