/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/swift/libswiftCore.dylib
*/

@class NSString;


@protocol NSObject
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@optional
-(NSString *)debugDescription;

@required
-(BOOL)isProxy;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1;
-(Class)class;
-(id)self;
-(id)performSelector:(SEL)arg1;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
-(BOOL)isKindOfClass:(Class)arg1;
-(BOOL)isMemberOfClass:(Class)arg1;
-(BOOL)conformsToProtocol:(id)arg1;
-(BOOL)respondsToSelector:(SEL)arg1;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(NSZone*)zone;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)description;

@end

