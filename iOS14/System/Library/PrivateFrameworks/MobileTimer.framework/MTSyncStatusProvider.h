/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTSyncStatusProvider <NSObject>
@property (assign,nonatomic,__weak) id<MTSyncStatusProviderDelegate> syncStatusProviderDelegate; 
@required
+(BOOL)deviceSupportsSyncing;
-(unsigned long long)syncStatus;
-(id<MTSyncStatusProviderDelegate>)syncStatusProviderDelegate;
-(void)setSyncStatusProviderDelegate:(id)arg1;

@end

