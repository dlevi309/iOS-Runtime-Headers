/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

