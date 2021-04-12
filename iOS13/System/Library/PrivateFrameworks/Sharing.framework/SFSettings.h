/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <PrototypeTools/PTSettings.h>

@class SFMagicHeadSettings;

@interface SFSettings : PTSettings {

	SFMagicHeadSettings* _magicHeadSettings;

}

@property (nonatomic,retain) SFMagicHeadSettings * magicHeadSettings;              //@synthesize magicHeadSettings=_magicHeadSettings - In the implementation block
+(id)settingsControllerModule;
-(SFMagicHeadSettings *)magicHeadSettings;
-(void)setMagicHeadSettings:(SFMagicHeadSettings *)arg1 ;
@end

