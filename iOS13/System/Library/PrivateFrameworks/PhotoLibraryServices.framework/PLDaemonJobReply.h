/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithReply:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcReply;
@end

