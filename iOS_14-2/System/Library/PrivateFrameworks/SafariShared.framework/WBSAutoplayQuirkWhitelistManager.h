/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSRemotePlistController;

@interface WBSAutoplayQuirkWhitelistManager : NSObject {

	WBSRemotePlistController* _remotePlistController;

}
-(id)init;
-(void)prepareForTermination;
-(id)initWithBuiltInWhitelistURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 ;
-(void)quirksForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

