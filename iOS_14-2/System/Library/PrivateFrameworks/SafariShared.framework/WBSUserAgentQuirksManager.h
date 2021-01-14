/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSRemotePlistController;

@interface WBSUserAgentQuirksManager : NSObject {

	WBSRemotePlistController* _remotePlistController;

}
-(id)init;
-(void)prepareForTermination;
-(void)getQuirksForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithBuiltInQuirkListURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 ;
@end

