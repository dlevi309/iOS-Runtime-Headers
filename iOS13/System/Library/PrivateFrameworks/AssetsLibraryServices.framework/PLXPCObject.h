/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(xpc_type_sRef)type;
+(BOOL)supportsSecureCoding;
-(NSObject*<OS_xpc_object>)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
@end

