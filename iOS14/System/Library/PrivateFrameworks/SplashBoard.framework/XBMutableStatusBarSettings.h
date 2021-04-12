/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <SplashBoard/XBStatusBarSettings.h>

@interface XBMutableStatusBarSettings : XBStatusBarSettings

@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) long long style; 
@property (assign,getter=isBackgroundActivityEnabled,nonatomic) BOOL backgroundActivityEnabled; 
-(void)setHidden:(BOOL)arg1 ;
-(void)setBackgroundActivityEnabled:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

