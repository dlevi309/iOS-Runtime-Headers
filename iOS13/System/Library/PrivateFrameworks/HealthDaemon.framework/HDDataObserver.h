/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDDataObserver <NSObject>
@optional
-(void)didAddSamplesOfTypes:(id)arg1 anchor:(id)arg2;
-(void)samplesJournaled:(id)arg1 type:(id)arg2;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@required
-(void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end

