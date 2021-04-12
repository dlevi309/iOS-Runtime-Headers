/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@protocol _DPDaemonProtocol
@required
-(void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)reportsNotYetSubmittedWithReply:(/*^block*/id)arg1;
-(void)retireReports:(id)arg1 withReply:(/*^block*/id)arg2;

@end

