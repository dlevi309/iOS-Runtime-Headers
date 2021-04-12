/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WBSRemotePlistController;

@interface _SFRequestDesktopSiteQuirksManager : NSObject {

	WBSRemotePlistController* _remotePlistController;

}
+(id)sharedManager;
-(id)init;
-(void)getAllQuirkValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)quirksValueForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

