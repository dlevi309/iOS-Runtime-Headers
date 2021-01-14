/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

