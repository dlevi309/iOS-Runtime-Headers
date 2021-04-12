/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface LSEnumerator : NSEnumerator {

	atomic_flag _hasFiredErrorHandler;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
+(id)new;
+(id)enumeratorForApplicationProxiesWithOptions:(unsigned long long)arg1 ;
+(id)enumeratorForApplicationProxiesOnVolume:(id)arg1 options:(unsigned long long)arg2 ;
+(id)enumeratorForPlugInKitProxiesWithOptions:(unsigned long long)arg1 ;
+(id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 ;
+(id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 filter:(/*^block*/id)arg3 ;
+(id)enumeratorForAllExtensionPoints;
+(id)_log;
-(id)init;
-(id)nextObject;
-(id)_init;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)_fireErrorHandlerWithError:(id)arg1 ;
@end

