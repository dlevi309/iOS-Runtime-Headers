/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol OS_xpc_object, NSXPCEncoderDelegate;
@class NSObject, NSXPCConnection;

@interface NSXPCEncoder : NSXPCCoder {

	NSObject*<OS_xpc_object> _oolObjects;
	NSXPCConnection* _connection;
	CFDictionaryRef _replacedByDelegateObjects;
	id<NSXPCEncoderDelegate> _delegate;
	SCD_Struct_NS70* _encoder;
	unsigned long long _genericIndex;
	BOOL _topLevelDictionary;
	BOOL _finished;
	BOOL _askForReplacement;

}

@property (assign) NSXPCConnection * _connection;                  //@synthesize connection=_connection - In the implementation block
@property (assign) id<NSXPCEncoderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_encodeInvocation:(id)arg1 isReply:(BOOL)arg2 into:(id)arg3 ;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)_newRootXPCObject;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)_encodeObject:(id)arg1 ;
-(void)encodeDataObject:(id)arg1 ;
-(id)init;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(id<NSXPCEncoderDelegate>)delegate;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeObject:(id)arg1 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(id)debugDescription;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)_encodeInvocationObjectArgumentsOnly:(id*)arg1 count:(unsigned long long)arg2 typeString:(const char*)arg3 selector:(SEL)arg4 isReply:(BOOL)arg5 into:(id)arg6 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<NSXPCEncoderDelegate>)arg1 ;
-(id)connection;
-(id)_replaceObject:(id)arg1 ;
-(void)_encodeCString:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(unsigned long long)_addOOLXPCObject:(id)arg1 ;
-(id)initWithStackSpace:(char*)arg1 size:(unsigned long long)arg2 ;
-(NSXPCConnection *)_connection;
-(void)_encodeUnkeyedObject:(id)arg1 ;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(void)_startTopLevelDictionary;
-(void)dealloc;
-(void)_checkObject:(id)arg1 ;
@end

