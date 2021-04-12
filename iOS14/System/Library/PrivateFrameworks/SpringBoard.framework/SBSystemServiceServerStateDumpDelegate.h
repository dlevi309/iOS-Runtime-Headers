/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSystemServiceServerStateDumpDelegate <SBSystemServiceServerDelegate>
@required
-(void)systemServiceServer:(id)arg1 client:(id)arg2 requestStateDump:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 enableRemoteStateDumpWithTimeout:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 disableRemoteStateDumpWithCompletion:(/*^block*/id)arg3;

@end

