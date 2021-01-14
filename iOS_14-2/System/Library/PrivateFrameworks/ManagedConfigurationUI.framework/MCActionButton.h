/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface MCActionButton : UIButton {

	int _state;
	CGRect _area;

}
-(void)_layout;
-(void)setState:(int)arg1 ;
-(void)_animationFinished:(id)arg1 ;
-(void)_cacheImages;
-(id)_titleForConfigState:(int)arg1 ;
-(void)_updateButtonImages:(int)arg1 animate:(BOOL)arg2 ;
-(id)initWithConfigState:(int)arg1 ;
-(void)setEnclosingArea:(CGRect)arg1 ;
@end

