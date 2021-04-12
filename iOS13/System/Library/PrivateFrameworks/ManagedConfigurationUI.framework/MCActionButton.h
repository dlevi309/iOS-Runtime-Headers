/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface MCActionButton : UIButton {

	int _state;
	CGRect _area;

}
-(void)setState:(int)arg1 ;
-(void)_layout;
-(void)_cacheImages;
-(id)_titleForConfigState:(int)arg1 ;
-(void)_updateButtonImages:(int)arg1 animate:(BOOL)arg2 ;
-(id)initWithConfigState:(int)arg1 ;
-(void)setEnclosingArea:(CGRect)arg1 ;
-(void)_animationFinished:(id)arg1 ;
@end

