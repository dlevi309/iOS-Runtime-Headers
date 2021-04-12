/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@protocol MDSearchQueryDelegate <NSObject>
@optional
-(void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2;

@required
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2;

@end

