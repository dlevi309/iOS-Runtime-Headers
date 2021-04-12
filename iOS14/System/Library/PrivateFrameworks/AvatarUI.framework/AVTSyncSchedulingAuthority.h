/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithLogger:(id)arg1 ;
-(id<AVTUILogger>)logger;
-(BOOL)importRequired;
-(BOOL)exportRequired;
-(void)importDidCompleteSuccessfully;
-(void)exportDidCompleteSuccessfully;
-(void)didReceivePushNotification;
-(void)didResetSync;
-(void)madeLocalChanges;
@end

