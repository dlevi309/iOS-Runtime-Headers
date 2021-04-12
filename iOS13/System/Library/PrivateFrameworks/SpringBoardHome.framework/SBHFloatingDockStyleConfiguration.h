/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SBHFloatingDockStyleConfiguration : NSObject <NSCopying> {

	BOOL _wantsPlatterShadow;
	unsigned long long _backgroundEffect;
	unsigned long long _platterEffect;
	unsigned long long _folderIconBackgroundStyle;

}

@property (nonatomic,readonly) unsigned long long backgroundEffect;                       //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (nonatomic,readonly) unsigned long long platterEffect;                          //@synthesize platterEffect=_platterEffect - In the implementation block
@property (nonatomic,readonly) unsigned long long folderIconBackgroundStyle;              //@synthesize folderIconBackgroundStyle=_folderIconBackgroundStyle - In the implementation block
@property (nonatomic,readonly) BOOL wantsPlatterShadow;                                   //@synthesize wantsPlatterShadow=_wantsPlatterShadow - In the implementation block
+(id)defaultConfiguration;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)backgroundEffect;
-(unsigned long long)platterEffect;
-(unsigned long long)folderIconBackgroundStyle;
-(BOOL)wantsPlatterShadow;
-(id)initWithBackgroundEffect:(unsigned long long)arg1 platterEffect:(unsigned long long)arg2 wantsPlatterShadow:(BOOL)arg3 folderIconBackgroundStyle:(unsigned long long)arg4 ;
-(id)configurationWithWantsPlatterShadow:(BOOL)arg1 ;
@end

