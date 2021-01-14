/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)disabled;
-(void)_updateColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSString *)disabledReason;
@end

