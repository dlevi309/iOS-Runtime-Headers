/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


#import <TouchML/TouchML-Structs.h>
@interface TMLRuntime : NSObject
+(id)classForObject:(id)arg1 ;
+(void)registerClass:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)ensureClass:(id)arg1 ;
+(void)bootstrap;
+(id)classForName:(id)arg1 ;
+(id)ensurePropertyWithKeyPath:(id)arg1 forObject:(id)arg2 writable:(BOOL)arg3 ;
+(id)signal:(id)arg1 forObject:(id)arg2 ;
+(id)requireModule:(id)arg1 ;
+(Class)createClass:(id)arg1 ;
+(id)createObjectWithIdentifier:(id)arg1 ofType:(id)arg2 initializer:(/*^block*/id)arg3 parentObject:(id)arg4 ;
+(void)makeObject:(id)arg1 implementProtocols:(id)arg2 ;
+(void)registerProperty:(id)arg1 forObject:(id)arg2 ;
+(void)registerSignal:(id)arg1 forObject:(id)arg2 ;
+(id)propertyWithKeyPath:(id)arg1 forObject:(id)arg2 ;
+(id)createObjectWithIdentifier:(id)arg1 ofType:(id)arg2 initializer:(/*^block*/id)arg3 ;
+(void)registerProtocol:(id)arg1 ;
+(id)rootClassDescriptor;
+(id)createObjectWithIdentifier:(id)arg1 ofClass:(id)arg2 initializer:(/*^block*/id)arg3 ;
+(id)childClassForName:(id)arg1 inClass:(id)arg2 ;
+(id)protocolForName:(id)arg1 ;
+(void)registerClass:(id)arg1 className:(id)arg2 ;
+(void)verifyProperty:(id)arg1 withClass:(Class)arg2 ;
+(void)registerMethod:(id)arg1 forObject:(id)arg2 ;
+(void)verifyMethod:(id)arg1 forProtocol:(id)arg2 ;
+(void)addProperty:(id)arg1 toClass:(Class)arg2 ;
+(void)verifyMethod:(id)arg1 withClass:(Class)arg2 ;
+(id)property:(id)arg1 forClass:(id)arg2 ;
+(id)propertyWithKeyPath:(id)arg1 inClass:(id)arg2 ;
+(id)property:(id)arg1 forObject:(id)arg2 ;
@end

