/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@class CSReceiverPreferences, NSSet;

@interface CSRecieverState : NSObject {

	int _notifyToken;
	CSReceiverPreferences* _receiverPreferences;
	NSSet* _enabledBundleIdentifiers;
	NSSet* _disabledBundleIdentifiers;

}

@property (nonatomic,readonly) CSReceiverPreferences * receiverPreferences;              //@synthesize receiverPreferences=_receiverPreferences - In the implementation block
@property (nonatomic,readonly) NSSet * enabledBundleIdentifiers;                         //@synthesize enabledBundleIdentifiers=_enabledBundleIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * disabledBundleIdentifiers;                        //@synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers - In the implementation block
@property (nonatomic,readonly) int notifyToken;                                          //@synthesize notifyToken=_notifyToken - In the implementation block
+(id)sharedInstance;
-(id)init;
-(CSReceiverPreferences *)receiverPreferences;
-(NSSet *)disabledBundleIdentifiers;
-(int)notifyToken;
-(BOOL)checkBundleIdentifier:(id)arg1 ;
-(void)_updateFromPreferences;
-(NSSet *)enabledBundleIdentifiers;
@end

