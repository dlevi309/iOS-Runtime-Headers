/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

