/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface MAXpcConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSString* _connectionId;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * connectionId;                          //@synthesize connectionId=_connectionId - In the implementation block
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(BOOL)notValid;
-(NSString *)connectionId;
@end

