/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSRemotePlistController;

@interface WBSUserAgentQuirksManager : NSObject {

	WBSRemotePlistController* _remotePlistController;

}
-(id)init;
-(void)prepareForTermination;
-(id)initWithBuiltInQuirkListURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 ;
-(void)getQuirksForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

