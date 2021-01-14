/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

