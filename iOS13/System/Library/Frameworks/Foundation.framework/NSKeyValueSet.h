/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSSet.h>
#import <libobjc.A.dylib/NSKeyValueProxyCaching.h>

@class NSObject, NSString, NSKeyValueNonmutatingSetMethodSet;

@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching> {

	NSObject* _container;
	NSString* _key;
	NSKeyValueNonmutatingSetMethodSet* _methods;

}
+(id)_proxyShare;
-(void)dealloc;
-(unsigned long long)count;
-(id)member:(id)arg1 ;
-(id)objectEnumerator;
-(SCD_Struct_NS30)_proxyLocator;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
@end

