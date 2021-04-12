/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/BSXPCEncoding.h>
#import <libobjc.A.dylib/BSXPCDecoding.h>

@protocol OS_xpc_object;
@class NSObject, NSKeyedArchiver, NSKeyedUnarchiver, NSString;

@interface BSXPCCoder : NSObject <BSDescriptionProviding, BSXPCSecureCoding, BSXPCEncoding, BSXPCDecoding> {

	NSObject*<OS_xpc_object> _message;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_xpc_object> _codingContext;
	NSKeyedArchiver* _archiver;
	NSKeyedUnarchiver* _unarchiver;
	int _finalized;

}

@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> message;                    //@synthesize message=_message - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> XPCConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rbs_testEncode:(id)arg1 andDecodeOfExpectedClass:(Class)arg2 ;
+(BOOL)supportsBSXPCSecureCoding;
+(id)coderWithMessage:(id)arg1 ;
+(id)coder;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(NSObject*<OS_xpc_object>)XPCConnection;
-(NSObject*<OS_xpc_object>)message;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(unsigned long long)decodeUInt64ForKey:(id)arg1 ;
-(id)decodeStringForKey:(id)arg1 ;
-(id)createMessage;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2 ;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(CGRect)decodeCGRectForKey:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(id)_finishCoding;
-(void)_appendXPCObject:(id)arg1 withName:(const char*)arg2 toBuilder:(id)arg3 ;
-(void)_removeValueForKey:(id)arg1 ;
-(id)_implicitDecodeXPCObjectForKey:(id)arg1 ;
@end

