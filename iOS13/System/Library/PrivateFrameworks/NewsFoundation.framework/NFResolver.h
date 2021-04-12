/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@protocol NFResolver <NSObject>
@required
-(id)resolveProtocol:(id)arg1;
-(id)resolveClass:(Class)arg1 name:(id)arg2;
-(id)resolveProtocol:(id)arg1 name:(id)arg2;
-(id)resolveForKey:(id)arg1;
-(id)currentObjectGraphResolver:(unsigned long long)arg1;
-(void)linkResolverWithLinkBlock:(/*^block*/id)arg1;
-(id)resolveClass:(Class)arg1;
-(id)resolveClass:(Class)arg1 contextBlock:(/*^block*/id)arg2;
-(id)resolveClass:(Class)arg1 name:(id)arg2 contextBlock:(/*^block*/id)arg3;
-(id)resolveProtocol:(id)arg1 contextBlock:(/*^block*/id)arg2;
-(id)resolveProtocol:(id)arg1 name:(id)arg2 contextBlock:(/*^block*/id)arg3;
-(id)resolveForKey:(id)arg1 context:(id)arg2;
-(id)unsafeResolveForKey:(id)arg1 name:(id)arg2;
-(id)unsafeResolveForKey:(id)arg1 name:(id)arg2 context:(id)arg3;

@end

