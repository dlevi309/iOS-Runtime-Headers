/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PLXPCObject : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _object;

}

@property (readonly) NSObject*<OS_xpc_object> object;              //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
+(xpc_type_sRef)type;
-(id)initWithXPCObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_xpc_object>)object;
-(id)initWithCoder:(id)arg1 ;
@end

