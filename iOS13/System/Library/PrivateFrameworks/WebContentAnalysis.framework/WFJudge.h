/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@class WFLSMMap, WFSystemContentWhitelist;

@interface WFJudge : NSObject {

	WFLSMMap* map;
	WFSystemContentWhitelist* whitelist;

}
+(id)defaultLSMMapPath;
+(id)defaultJudge;
-(void)dealloc;
-(id)initWithMap:(id)arg1 ;
-(id)initWithMap:(id)arg1 systemContentWhitelist:(id)arg2 ;
-(id)_pronounceOnWebpage:(id)arg1 ;
-(id)pronounceOnWebpage:(id)arg1 ;
-(id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id*)arg3 pageTitle:(id*)arg4 ;
-(id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id*)arg4 pageTitle:(id*)arg5 ;
@end

