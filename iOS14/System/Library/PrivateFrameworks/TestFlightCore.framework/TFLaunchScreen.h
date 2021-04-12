/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


@class TFAppLockup, NSString, NSURL;

@interface TFLaunchScreen : NSObject {

	TFAppLockup* _lockup;
	NSString* _testerNotes;
	NSURL* _howToScreenshotSupportUrl;

}

@property (nonatomic,readonly) TFAppLockup * lockup;                           //@synthesize lockup=_lockup - In the implementation block
@property (nonatomic,copy,readonly) NSString * testerNotes;                    //@synthesize testerNotes=_testerNotes - In the implementation block
@property (nonatomic,readonly) NSURL * howToScreenshotSupportUrl;              //@synthesize howToScreenshotSupportUrl=_howToScreenshotSupportUrl - In the implementation block
-(TFAppLockup *)lockup;
-(id)initWithLockup:(id)arg1 testerNotes:(id)arg2 howToScreenshotSupportUrl:(id)arg3 ;
-(NSURL *)howToScreenshotSupportUrl;
-(NSString *)testerNotes;
@end

