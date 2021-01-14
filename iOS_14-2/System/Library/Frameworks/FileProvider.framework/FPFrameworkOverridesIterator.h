/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <Foundation/NSProxy.h>

@class NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy {

	NSArray* _overrides;
	/*^block*/id _noSuitableModuleFoundHandler;
	unsigned long long _currentIndex;
	NSInvocation* _invocation;

}
+(id)allOverrides;
+(void)addOverride:(id)arg1 ;
+(void)removeOverride:(id)arg1 ;
+(id)newIteratorWithNotFoundHandler:(/*^block*/id)arg1 ;
+(id)overrideDirectoryURL;
-(void)finish;
-(void)callNextOverrides;
-(id)initWithOverrides:(id)arg1 noSuitableModuleFoundHandler:(/*^block*/id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

