/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/


#import <PrivacySettingsUI/PrivacySettingsUI-Structs.h>
@class UIImageView, NSString;

@interface PUILocationUsageMixin : NSObject {

	int _usage;
	unsigned long long _authLevel;
	UIImageView* _usageIndicator;
	NSString* _authLevelString;

}

@property (assign,nonatomic) int usage;                                   //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) unsigned long long authLevel;                //@synthesize authLevel=_authLevel - In the implementation block
@property (nonatomic,readonly) UIImageView * usageIndicator;              //@synthesize usageIndicator=_usageIndicator - In the implementation block
@property (nonatomic,readonly) NSString * authLevelString;                //@synthesize authLevelString=_authLevelString - In the implementation block
-(id)init;
-(void)setUsage:(int)arg1 ;
-(int)usage;
-(CGSize)usageIndicatorSize;
-(id)iconNameForUsage:(int)arg1 ;
-(id)_authLevelForMask:(unsigned long long)arg1 ;
-(void)setAuthLevel:(unsigned long long)arg1 ;
-(CGSize)_authLevelLabelSize:(unsigned long long)arg1 ;
-(unsigned long long)authLevel;
-(UIImageView *)usageIndicator;
-(NSString *)authLevelString;
@end

