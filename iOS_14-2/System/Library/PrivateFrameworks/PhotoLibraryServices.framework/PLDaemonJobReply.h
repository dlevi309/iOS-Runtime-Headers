/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PLDaemonJobReply : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _xpcReply;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcReply;              //@synthesize xpcReply=_xpcReply - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithReply:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcReply;
-(id)initWithCoder:(id)arg1 ;
@end

