/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCNetworkReachabilityRequirement <NSObject>
@property (getter=isSatisfied,nonatomic,readonly) BOOL satisfied; 
@property (nonatomic,readonly) long long offlineReason; 
@property (assign,nonatomic,__weak) id<FCNetworkReachabilityRequirementObserving> observer; 
@required
-(void)setObserver:(id)arg1;
-(id<FCNetworkReachabilityRequirementObserving>)observer;
-(BOOL)isSatisfied;
-(long long)offlineReason;

@end

