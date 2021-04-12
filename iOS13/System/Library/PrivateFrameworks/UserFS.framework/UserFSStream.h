/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
*/


@protocol OS_xpc_object;
@class UserFSItem, NSObject;

@interface UserFSStream : NSObject {

	UserFSItem* _item;
	unsigned long long _length;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) UserFSItem * item;                                //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) unsigned long long length;                        //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) BOOL writable; 
-(void)dealloc;
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(UserFSItem *)item;
-(void)setItem:(UserFSItem *)arg1 ;
-(BOOL)closeAndReturnError:(id*)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_cancelConnection;
-(BOOL)writable;
-(id)initWithUserFSItem:(id)arg1 length:(unsigned long long)arg2 connection:(id)arg3 ;
-(long long)_readBytesUpToLength:(unsigned long long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4 ;
-(long long)readBytesOfLength:(unsigned long long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4 ;
@end

