/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/


@class NSCache;

@interface WBUFormAutoFillWhiteList : NSObject {

	NSCache* _cache;

}
+(id)sharedAutoFillWhiteList;
-(id)init;
-(void)dealloc;
-(BOOL)allowsURL:(id)arg1 ;
-(void)_whiteListSettingsChanged:(id)arg1 ;
@end

