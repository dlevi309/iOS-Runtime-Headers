/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSStateDumpService : SBSAbstractSystemService
-(void)requestStateDump:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)enableRemoteStateDumpWithTimeout:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableRemoteStateDumpWithCompletion:(/*^block*/id)arg1 ;
@end

