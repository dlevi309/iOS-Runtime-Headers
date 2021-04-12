/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
*/


@protocol PBDataProviderProtocol <NSObject>
@required
-(void)helloCompletionBlock:(/*^block*/id)arg1;
-(void)waitForItemRequestsDeliveryCompletion:(/*^block*/id)arg1;
-(void)loadRepresentationForItemAtIndex:(unsigned long long)arg1 type:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)callCleanupBlockWithUUID:(id)arg1;

@end

