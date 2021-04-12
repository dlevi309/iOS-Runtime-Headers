/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<AVTMSStickerViewDelegate>)delegate;
-(void)_prepareForReuse;
-(void)handleLongPress:(id)arg1 ;
-(void)setDelegate:(id<AVTMSStickerViewDelegate>)arg1 ;
-(BOOL)allowsPeel;
-(void)setAllowsPeel:(BOOL)arg1 ;
-(id<AVTStickerDisclosureValidationDelegate>)disclosureValidationDelegate;
-(void)setDisclosureValidationDelegate:(id<AVTStickerDisclosureValidationDelegate>)arg1 ;
-(void)handleTap:(id)arg1 ;
@end

