/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)deregisterClient;

@end

