/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(void)resume;
-(id)initWithConnection:(id)arg1 ;
@end

