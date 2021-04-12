/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_testEncodeAndDecodeObject:(id)arg1 allowedClasses:(id)arg2 ;
+(id)_testEncodeAndDecodeObject:(id)arg1 allowedClass:(Class)arg2 ;
+(id)_testEncodeAndDecodeInvocation:(id)arg1 interface:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<NSObject>)userInfo;
-(BOOL)requiresSecureCoding;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(void)setUserInfo:(id<NSObject>)arg1 ;
-(id)decodeXPCObjectForKey:(id)arg1 ;
-(NSXPCConnection *)connection;
@end

