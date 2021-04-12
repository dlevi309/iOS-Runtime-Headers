/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class WFUserSettings;

@interface WebBookmarkWebFilterSettings : NSObject {

	WFUserSettings* _userSettings;

}

@property (nonatomic,readonly) WFUserSettings * userSettings; 
@property (getter=isWebFilterEnabled,nonatomic,readonly) BOOL webFilterEnabled; 
@property (getter=isWebFilterWhiteListOnlyModeEnabled,nonatomic,readonly) BOOL webFilterWhiteListOnlyModeEnabled; 
+(id)sharedWebFilterSettings;
-(id)init;
-(void)dealloc;
-(WFUserSettings *)userSettings;
-(BOOL)isWebFilterEnabled;
-(BOOL)isWebFilterWhiteListOnlyModeEnabled;
-(void)reloadSettings;
@end

