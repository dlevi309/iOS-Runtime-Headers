/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCNetworkReachabilityType <NSObject>
@property (nonatomic,readonly) BOOL isCloudKitReachable; 
@property (assign,nonatomic) long long offlineReason; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(long long)offlineReason;
-(void)setOfflineReason:(long long)arg1;
-(BOOL)isCloudKitReachable;

@end

