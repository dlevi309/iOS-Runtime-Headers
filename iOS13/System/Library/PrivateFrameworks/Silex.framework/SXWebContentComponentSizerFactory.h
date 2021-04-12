/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentSizerFactory.h>

@protocol SXDOMObjectProviding, SWLoadingPolicyProvider;
@class NSString;

@interface SXWebContentComponentSizerFactory : NSObject <SXComponentSizerFactory> {

	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SWLoadingPolicyProvider> _loadingPolicyProvider;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                     //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SWLoadingPolicyProvider> loadingPolicyProvider;              //@synthesize loadingPolicyProvider=_loadingPolicyProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
-(NSString *)type;
-(int)role;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id<SWLoadingPolicyProvider>)loadingPolicyProvider;
-(id)initWithDOMObjectProvider:(id)arg1 loadingPolicyProvider:(id)arg2 ;
@end

