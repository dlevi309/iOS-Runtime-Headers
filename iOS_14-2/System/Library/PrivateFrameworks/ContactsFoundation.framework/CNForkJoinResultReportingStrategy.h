/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNForkJoinResultReportingStrategy <NSObject>
@required
-(id)initWithCapacity:(unsigned long long)arg1;
-(void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned long long)arg2 observer:(id)arg3;
-(void)observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2;

@end

