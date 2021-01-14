/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@class WFLSMMap, WFSystemContentWhitelist;

@interface WFJudge : NSObject {

	WFLSMMap* map;
	WFSystemContentWhitelist* whitelist;

}
+(id)defaultLSMMapPath;
+(id)defaultJudge;
-(id)initWithMap:(id)arg1 ;
-(void)dealloc;
-(id)initWithMap:(id)arg1 systemContentWhitelist:(id)arg2 ;
-(id)_pronounceOnWebpage:(id)arg1 ;
-(id)pronounceOnWebpage:(id)arg1 ;
-(id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id*)arg3 pageTitle:(id*)arg4 ;
-(id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id*)arg4 pageTitle:(id*)arg5 ;
@end

