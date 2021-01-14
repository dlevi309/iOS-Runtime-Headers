/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/


@protocol HDDataObserver <NSObject>
@optional
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
-(void)samplesJournaled:(id)arg1 type:(id)arg2;
-(void)didAddSamplesOfTypes:(id)arg1 anchor:(id)arg2;

@required
-(void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end

