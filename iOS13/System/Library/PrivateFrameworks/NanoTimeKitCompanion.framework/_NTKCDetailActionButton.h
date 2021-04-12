/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString;

@interface _NTKCDetailActionButton : UIButton {

	BOOL _disabled;
	NSString* _disabledReason;

}

@property (nonatomic,readonly) BOOL disabled;                          //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) NSString * disabledReason;              //@synthesize disabledReason=_disabledReason - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)disabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setTitle:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateColor;
-(void)setDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(NSString *)disabledReason;
@end

