/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentSizerFactory.h>

@protocol SXDOMObjectProviding, SXAdControllerProvider;
@class NSString;

@interface SXBannerAdComponentSizerFactory : NSObject <SXComponentSizerFactory> {

	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXAdControllerProvider> _adControllerProvider;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                   //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SXAdControllerProvider> adControllerProvider;              //@synthesize adControllerProvider=_adControllerProvider - In the implementation block
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(id<SXAdControllerProvider>)adControllerProvider;
-(NSString *)type;
-(id)initWithDOMObjectProvider:(id)arg1 adControllerProvider:(id)arg2 ;
-(int)role;
@end

