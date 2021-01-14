/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKTransitTicketDetailDataSource <NSObject>
@required
-(unsigned long long)numberOfLegs;
-(id)titleForLeg:(unsigned long long)arg1;
-(long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1;
-(id)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
-(id)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;

@end

