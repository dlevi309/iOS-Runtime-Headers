/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PKXPCObject : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _object;

}

@property (retain) NSObject*<OS_xpc_object> object;              //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)object:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_xpc_object>)object;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

