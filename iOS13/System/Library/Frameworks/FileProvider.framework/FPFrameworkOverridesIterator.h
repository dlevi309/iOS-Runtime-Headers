/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)addOverride:(id)arg1 ;
+(void)removeOverride:(id)arg1 ;
+(id)newIteratorWithNotFoundHandler:(/*^block*/id)arg1 ;
+(id)allOverrides;
+(id)overrideDirectoryURL;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)finish;
-(id)initWithOverrides:(id)arg1 noSuitableModuleFoundHandler:(/*^block*/id)arg2 ;
-(void)callNextOverrides;
@end

