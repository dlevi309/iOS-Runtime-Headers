/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface SBExternalSoundsDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) BOOL keyboardPlaysSounds; 
@property (assign,nonatomic) BOOL systemHapticsEnabled; 
@property (assign,nonatomic) BOOL buttonsCanChangeRingerVolume; 
-(void)setButtonsCanChangeRingerVolume:(BOOL)arg1 ;
-(BOOL)buttonsCanChangeRingerVolume;
-(void)setSystemHapticsEnabled:(BOOL)arg1 ;
-(BOOL)systemHapticsEnabled;
-(void)setKeyboardPlaysSounds:(BOOL)arg1 ;
-(BOOL)keyboardPlaysSounds;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

