/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTSyncSchedulingAuthority.h>

@protocol AVTSyncSchedulingAuthority
@required
-(BOOL)importRequired;
-(BOOL)exportRequired;
-(void)importDidCompleteSuccessfully;
-(void)exportDidCompleteSuccessfully;
-(void)didReceivePushNotification;
-(void)didResetSync;
-(void)madeLocalChanges;

@end


@protocol AVTUILogger;
@interface AVTSyncSchedulingAuthority : NSObject <AVTSyncSchedulingAuthority> {

	id<AVTUILogger> _logger;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;              //@synthesize logger=_logger - In the implementation block
-(id<AVTUILogger>)logger;
-(id)initWithLogger:(id)arg1 ;
-(BOOL)importRequired;
-(BOOL)exportRequired;
-(void)importDidCompleteSuccessfully;
-(void)exportDidCompleteSuccessfully;
-(void)didReceivePushNotification;
-(void)didResetSync;
-(void)madeLocalChanges;
@end

