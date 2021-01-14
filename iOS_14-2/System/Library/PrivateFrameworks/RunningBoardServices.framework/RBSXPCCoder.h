/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCEncoding.h>
#import <libobjc.A.dylib/RBSXPCDecoding.h>

@protocol OS_xpc_object;
@class NSObject, NSKeyedArchiver, NSKeyedUnarchiver, NSString;

@interface RBSXPCCoder : NSObject <RBSXPCEncoding, RBSXPCDecoding> {

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
+(BOOL)supportsRBSXPCSecureCoding;
+(id)coderWithMessage:(id)arg1 ;
+(id)rbs_testNSEncode:(id)arg1 andDecodeOfExpectedClass:(Class)arg2 ;
+(id)rbs_testEncode:(id)arg1 andDecodeOfExpectedClass:(Class)arg2 ;
+(id)coder;
-(BOOL)containsValueForKey:(id)arg1 ;
-(NSObject*<OS_xpc_object>)XPCConnection;
-(NSObject*<OS_xpc_object>)message;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)decodeStringForKey:(id)arg1 ;
-(id)init;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(id)_implicitDecodeXPCObjectForKey:(id)arg1 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(id)createMessage;
-(id)initWithMessage:(id)arg1 ;
-(unsigned long long)decodeUInt64ForKey:(id)arg1 ;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)_removeValueForKey:(id)arg1 ;
-(id)_finishCoding;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3 ;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(void)dealloc;
@end

