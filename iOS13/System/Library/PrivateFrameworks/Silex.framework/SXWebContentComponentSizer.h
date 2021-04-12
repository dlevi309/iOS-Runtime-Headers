/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponentSizer.h>

@protocol SWLoadingPolicyProvider;
@interface SXWebContentComponentSizer : SXComponentSizer {

	id<SWLoadingPolicyProvider> _loadingPolicyProvider;

}

@property (nonatomic,readonly) id<SWLoadingPolicyProvider> loadingPolicyProvider;              //@synthesize loadingPolicyProvider=_loadingPolicyProvider - In the implementation block
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(id<SWLoadingPolicyProvider>)loadingPolicyProvider;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 loadingPolicyProvider:(id)arg6 ;
@end

