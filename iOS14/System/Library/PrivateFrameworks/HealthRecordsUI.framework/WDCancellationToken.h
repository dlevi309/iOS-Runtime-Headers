/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@interface WDCancellationToken : NSObject {

	BOOL _cancelled;

}

@property (assign,getter=isCancelled,nonatomic) BOOL cancelled; 
-(void)setCancelled:(BOOL)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
@end

