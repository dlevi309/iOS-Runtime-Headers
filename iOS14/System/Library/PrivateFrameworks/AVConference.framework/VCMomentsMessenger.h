/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCMomentsMessenger <NSObject>
@property (nonatomic,readonly) unsigned capabilities; 
@required
-(unsigned)capabilities;
-(void)registerClient;
-(void)cleanupActiveRequests;
-(void)setMomentsDelegate:(id)arg1;
-(BOOL)processClientRequest:(id)arg1 error:(id*)arg2;
-(void)clearHistoryBuffer;
-(void)deregisterClient;

@end

