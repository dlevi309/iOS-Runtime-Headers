/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)recordStrings:(id)arg1 metadata:(id)arg2 ;
-(void)recordWords:(id)arg1 ;
-(void)recordBitValues:(id)arg1 ;
-(void)recordBitValues:(id)arg1 metadata:(id)arg2 ;
-(void)recordBitVectors:(id)arg1 metadata:(id)arg2 ;
-(void)handleReturn:(BOOL)arg1 forSelector:(id)arg2 key:(id)arg3 values:(id)arg4 error:(id)arg5 ;
@end

