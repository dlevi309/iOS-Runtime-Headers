/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@protocol NSObject;
@class NSXPCConnection;

@interface NSXPCCoder : NSCoder {

	id<NSObject> _userInfo;
	id _reserved1;

}

@property (retain) id<NSObject> userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) NSXPCConnection * connection; 
+(id)_testEncodeAndDecodeInvocation:(id)arg1 interface:(id)arg2 ;
+(id)_testEncodeAndDecodeObject:(id)arg1 allowedClass:(Class)arg2 ;
+(id)_testEncodeAndDecodeObject:(id)arg1 allowedClasses:(id)arg2 ;
-(void)setUserInfo:(id<NSObject>)arg1 ;
-(id<NSObject>)userInfo;
-(id)init;
-(id)decodeXPCObjectForKey:(id)arg1 ;
-(BOOL)requiresSecureCoding;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(NSXPCConnection *)connection;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(void)dealloc;
@end

