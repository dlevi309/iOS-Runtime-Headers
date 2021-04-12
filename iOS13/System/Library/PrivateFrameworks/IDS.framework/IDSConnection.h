/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class _IDSConnection, IDSAccount;

@interface IDSConnection : NSObject {

	_IDSConnection* _internal;

}

@property (nonatomic,readonly) _IDSConnection * _internal; 
@property (nonatomic,readonly) IDSAccount * account; 
@property (nonatomic,readonly) BOOL isActive; 
+(id)_connectionWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(BOOL)arg3 ;
-(void)dealloc;
-(BOOL)isActive;
-(_IDSConnection *)_internal;
-(IDSAccount *)account;
-(void)removeDelegate:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(id)_initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(BOOL)arg3 ;
-(BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(id)initWithAccount:(id)arg1 commands:(id)arg2 ;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
@end

