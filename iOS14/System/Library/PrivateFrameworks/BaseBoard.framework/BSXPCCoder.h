/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> message; 
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> XPCConnection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)coderWithMessage:(id)arg1 ;
+(BOOL)supportsBSXPCSecureCoding;
+(id)coder;
-(BOOL)containsValueForKey:(id)arg1 ;
-(NSObject*<OS_xpc_object>)XPCConnection;
-(id)succinctDescription;
-(NSObject*<OS_xpc_object>)message;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)decodeStringForKey:(id)arg1 ;
-(id)init;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)_implicitDecodeXPCObjectForKey:(id)arg1 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(CGRect)decodeCGRectForKey:(id)arg1 ;
-(id)createMessage;
-(NSString *)description;
-(id)initWithMessage:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(unsigned long long)decodeUInt64ForKey:(id)arg1 ;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2 ;
-(void)_removeValueForKey:(id)arg1 ;
-(id)_finishCoding;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

