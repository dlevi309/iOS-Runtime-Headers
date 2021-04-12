/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@class CSReceiverServerPreferences;

@interface SpotlightSenderState : NSObject {

	CSReceiverServerPreferences* _serverPreferences;

}

@property (nonatomic,readonly) CSReceiverServerPreferences * serverPreferences;              //@synthesize serverPreferences=_serverPreferences - In the implementation block
-(id)init;
-(void)_updateFromPreferences;
-(BOOL)clientDisabled:(long long)arg1 ;
-(CSReceiverServerPreferences *)serverPreferences;
@end

