/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@class CSReceiverServerPreferences;

@interface SpotlightSenderState : NSObject {

	CSReceiverServerPreferences* _serverPreferences;

}

@property (nonatomic,readonly) CSReceiverServerPreferences * serverPreferences;              //@synthesize serverPreferences=_serverPreferences - In the implementation block
-(id)init;
-(CSReceiverServerPreferences *)serverPreferences;
-(BOOL)clientDisabled:(long long)arg1 ;
-(void)_updateFromPreferences;
@end

