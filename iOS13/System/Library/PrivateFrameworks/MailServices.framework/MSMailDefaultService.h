/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <MailServices/MSService.h>

@interface MSMailDefaultService : MSService {

	BOOL _shouldLaunch;

}

@property (assign,nonatomic) BOOL shouldLaunchMobileMail;              //@synthesize shouldLaunch=_shouldLaunch - In the implementation block
-(id)init;
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
-(BOOL)_launchMobileMailSuspendedError:(id*)arg1 ;
-(id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id*)arg4 ;
-(id)_createServiceOnQueue:(id)arg1 ;
-(BOOL)shouldLaunchMobileMail;
@end

