/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNArrivalUpdaterDelegate <NSObject>
@optional
-(void)arrivalUpdater:(id)arg1 didArriveAtEndOfLegAtIndex:(unsigned long long)arg2;
-(void)arrivalUpdater:(id)arg1 didEnterPreArrivalStateForLegIndex:(unsigned long long)arg2;
-(void)arrivalUpdaterDidTimeoutInArrivalRegion:(id)arg1;

@end

