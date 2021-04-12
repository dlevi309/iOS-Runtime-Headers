/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

