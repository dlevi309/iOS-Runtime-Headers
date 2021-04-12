/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

