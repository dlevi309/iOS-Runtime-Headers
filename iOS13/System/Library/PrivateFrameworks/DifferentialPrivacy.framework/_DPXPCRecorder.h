/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/_DPDataRecorder.h>

@class _DPDaemonConnection;

@interface _DPXPCRecorder : _DPDataRecorder {

	_DPDaemonConnection* _connection;

}

@property (nonatomic,readonly) _DPDaemonConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(id)initWithKey:(id)arg1 ;
-(_DPDaemonConnection *)connection;
-(void)recordNumbers:(id)arg1 ;
-(void)recordStrings:(id)arg1 ;
-(void)recordWords:(id)arg1 ;
-(void)recordBitValues:(id)arg1 ;
-(void)handleReturn:(BOOL)arg1 forSelector:(id)arg2 key:(id)arg3 values:(id)arg4 error:(id)arg5 ;
@end

