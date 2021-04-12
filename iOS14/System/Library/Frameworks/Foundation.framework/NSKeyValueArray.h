/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSArray.h>
#import <libobjc.A.dylib/NSKeyValueProxyCaching.h>

@class NSObject, NSString, NSKeyValueNonmutatingArrayMethodSet;

@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching> {

	NSObject* _container;
	NSString* _key;
	NSKeyValueNonmutatingArrayMethodSet* _methods;

}
+(id)_proxyShare;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(SCD_Struct_NS37)_proxyLocator;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)_proxyNonGCFinalize;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)dealloc;
@end

