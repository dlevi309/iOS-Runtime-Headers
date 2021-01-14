/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPSystemReadyProvider <NSObject>
@property (nonatomic,readonly) BOOL isSystemReady; 
@property (assign,nonatomic,__weak) id<HDSPSystemReadyDelegate> delegate; 
@required
-(id<HDSPSystemReadyDelegate>)delegate;
-(BOOL)isSystemReady;
-(void)setDelegate:(id)arg1;

@end

