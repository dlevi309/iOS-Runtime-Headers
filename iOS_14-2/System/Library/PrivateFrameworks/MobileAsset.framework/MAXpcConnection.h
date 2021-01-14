/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithServiceName:(id)arg1 ;
-(BOOL)notValid;
-(NSString *)connectionId;
-(NSObject*<OS_xpc_object>)connection;
-(void)dealloc;
@end

