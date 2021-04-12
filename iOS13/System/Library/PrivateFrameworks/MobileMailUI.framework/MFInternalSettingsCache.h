/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/


@interface MFInternalSettingsCache : NSObject {

	BOOL _tiltedTabSkyViewEnabled;
	BOOL _UIDebuggingEnabled;

}

@property (assign,nonatomic) BOOL tiltedTabSkyViewEnabled;              //@synthesize tiltedTabSkyViewEnabled=_tiltedTabSkyViewEnabled - In the implementation block
@property (assign,nonatomic) BOOL UIDebuggingEnabled;                   //@synthesize UIDebuggingEnabled=_UIDebuggingEnabled - In the implementation block
+(id)sharedCache;
-(BOOL)tiltedTabSkyViewEnabled;
-(BOOL)UIDebuggingEnabled;
-(void)setTiltedTabSkyViewEnabled:(BOOL)arg1 ;
-(void)setUIDebuggingEnabled:(BOOL)arg1 ;
@end

