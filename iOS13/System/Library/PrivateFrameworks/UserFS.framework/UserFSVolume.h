/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
*/


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface UserFSVolume : NSObject {

	BOOL _isLocked;
	NSString* _deviceName;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName;                     //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) BOOL isLocked;                                  //@synthesize isLocked=_isLocked - In the implementation block
+(id)volumeWithDeviceName:(id)arg1 error:(id*)arg2 ;
+(BOOL)prepareToAccessDeviceName:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)closeAndReturnError:(id*)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)deviceName;
-(BOOL)isLocked;
-(id)initWithDeviceName:(id)arg1 error:(id*)arg2 ;
-(id)itemAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)flushAndReturnError:(id*)arg1 ;
-(id)rootDirectoryAndReturnError:(id*)arg1 ;
-(BOOL)deleteFiles:(id)arg1 error:(id*)arg2 ;
@end

