/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSStateDumpService : SBSAbstractSystemService
-(void)disableRemoteStateDumpWithCompletion:(/*^block*/id)arg1 ;
-(void)enableRemoteStateDumpWithTimeout:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestStateDump:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

