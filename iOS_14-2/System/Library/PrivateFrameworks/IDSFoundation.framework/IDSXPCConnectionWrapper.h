/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSXPCConnectionProtocol.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface IDSXPCConnectionWrapper : NSObject <IDSXPCConnectionProtocol> {

	NSObject*<OS_xpc_object> _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)cancel;
-(void)resume;
@end

