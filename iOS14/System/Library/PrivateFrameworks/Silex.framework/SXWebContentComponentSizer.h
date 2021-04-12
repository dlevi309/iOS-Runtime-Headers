/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponentSizer.h>

@protocol SWLoadingPolicyProvider;
@interface SXWebContentComponentSizer : SXComponentSizer {

	id<SWLoadingPolicyProvider> _loadingPolicyProvider;

}

@property (nonatomic,readonly) id<SWLoadingPolicyProvider> loadingPolicyProvider;              //@synthesize loadingPolicyProvider=_loadingPolicyProvider - In the implementation block
-(id<SWLoadingPolicyProvider>)loadingPolicyProvider;
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 loadingPolicyProvider:(id)arg6 ;
@end

