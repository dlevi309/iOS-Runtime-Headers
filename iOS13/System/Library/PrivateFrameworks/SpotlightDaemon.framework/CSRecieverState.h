/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)notifyToken;
-(void)_updateFromPreferences;
-(BOOL)checkBundleIdentifier:(id)arg1 ;
-(CSReceiverPreferences *)receiverPreferences;
-(NSSet *)enabledBundleIdentifiers;
-(NSSet *)disabledBundleIdentifiers;
@end

