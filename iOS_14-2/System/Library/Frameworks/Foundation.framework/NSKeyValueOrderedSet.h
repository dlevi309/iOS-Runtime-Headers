/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>
#import <libobjc.A.dylib/NSKeyValueProxyCaching.h>

@class NSObject, NSString, NSKeyValueNonmutatingOrderedSetMethodSet;

@interface NSKeyValueOrderedSet : NSOrderedSet <NSKeyValueProxyCaching> {

	NSObject* _container;
	NSString* _key;
	NSKeyValueNonmutatingOrderedSetMethodSet* _methods;

}
+(id)_proxyShare;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(SCD_Struct_NS37)_proxyLocator;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)_proxyNonGCFinalize;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)dealloc;
@end

