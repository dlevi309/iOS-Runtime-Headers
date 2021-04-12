/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCNetworkReachabilityRequirement <NSObject>
@property (getter=isSatisfied,nonatomic,readonly) BOOL satisfied; 
@property (nonatomic,readonly) long long offlineReason; 
@property (assign,nonatomic,__weak) id<FCNetworkReachabilityRequirementObserving> observer; 
@required
-(id<FCNetworkReachabilityRequirementObserving>)observer;
-(void)setObserver:(id)arg1;
-(long long)offlineReason;
-(BOOL)isSatisfied;

@end

