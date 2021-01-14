/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class FBSDisplayLayoutMonitor;

@interface VCCKApplicationStateObserver : NSObject {

	BOOL _applicationVisible;
	FBSDisplayLayoutMonitor* _layoutMonitor;

}

@property (nonatomic,readonly) FBSDisplayLayoutMonitor * layoutMonitor;                        //@synthesize layoutMonitor=_layoutMonitor - In the implementation block
@property (assign,getter=isApplicationVisible,nonatomic) BOOL applicationVisible;              //@synthesize applicationVisible=_applicationVisible - In the implementation block
-(id)initWithBundleIdentifier:(id)arg1 ;
-(FBSDisplayLayoutMonitor *)layoutMonitor;
-(void)dealloc;
-(BOOL)isApplicationVisible;
-(void)setApplicationVisible:(BOOL)arg1 ;
@end

