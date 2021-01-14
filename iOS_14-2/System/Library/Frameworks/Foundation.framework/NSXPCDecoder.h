/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol OS_xpc_object;
@class NSXPCConnection, NSObject;

@interface NSXPCDecoder : NSXPCCoder {

	unsigned long long _genericIndex;
	SCD_Struct_NS71* _decoder;
	NSXPCConnection* _connection;
	/*function pointer*/void** _collections[272];
	SCD_Struct_NS72 _rootObject;
	BOOL expectsUnnestedCollection;
	BOOL decodedCollection;
	unsigned _collectionPointer;
	id _allowedClassesList[272];
	long long _allowedClassesIndex;
	NSObject*<OS_xpc_object> _oolObjects;

}

@property (assign) NSXPCConnection * _connection;              //@synthesize connection=_connection - In the implementation block
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(id)allowedClasses;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(id)_decodeObjectOfClasses:(id)arg1 atObject:(SCD_Struct_NS72*)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(id)init;
-(int)decodeInt32ForKey:(id)arg1 ;
-(void)_validateAllowedXPCType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(int)decodeIntForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(id)decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3 ;
-(void)_startReadingFromXPCObject:(id)arg1 ;
-(id)decodeXPCObjectForKey:(id)arg1 ;
-(id)_xpcObjectForIndex:(long long)arg1 ;
-(id)_decodeArrayOfObjectsForKey:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(int)__decodeXPCObject:(id)arg1 allowingSimpleMessageSend:(BOOL)arg2 outInvocation:(id*)arg3 outArguments:(id*)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id*)arg6 outSelector:(SEL*)arg7 isReply:(BOOL)arg8 replySelector:(SEL)arg9 interface:(id)arg10 ;
-(id)debugDescription;
-(id)decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3 ;
-(const char*)_decodeCStringForKey:(id)arg1 ;
-(int)_decodeMessageFromXPCObject:(id)arg1 allowingSimpleMessageSend:(BOOL)arg2 outInvocation:(id*)arg3 outArguments:(id*)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id*)arg6 outSelector:(SEL*)arg7 interface:(id)arg8 ;
-(id)connection;
-(id)_decodeReplyFromXPCObject:(id)arg1 forSelector:(SEL)arg2 interface:(id)arg3 ;
-(id)_decodeCollectionOfClass:(Class)arg1 allowedClasses:(id)arg2 forKey:(id)arg3 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeObject;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(NSXPCConnection *)_connection;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

