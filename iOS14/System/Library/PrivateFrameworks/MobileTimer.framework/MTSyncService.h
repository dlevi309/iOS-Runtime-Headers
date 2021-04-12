/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTSyncService <NSObject>
@property (assign,nonatomic,__weak) id<MTSyncServiceDelegate> delegate; 
@required
-(BOOL)resume:(id*)arg1;
-(void)suspend;
-(id)requestSync:(unsigned long long)arg1;
-(id<MTSyncServiceDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

