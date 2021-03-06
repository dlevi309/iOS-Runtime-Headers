/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@protocol _DPDaemonProtocol
@required
-(void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)recordBitValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)recordBitVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)recordStrings:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)reportsNotYetSubmittedWithReply:(/*^block*/id)arg1;
-(void)retireReports:(id)arg1 withReply:(/*^block*/id)arg2;

@end

