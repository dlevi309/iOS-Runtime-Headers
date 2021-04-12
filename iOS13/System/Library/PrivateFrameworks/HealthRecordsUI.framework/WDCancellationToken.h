/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@interface WDCancellationToken : NSObject {

	BOOL _cancelled;

}

@property (assign,getter=isCancelled,nonatomic) BOOL cancelled; 
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
@end

