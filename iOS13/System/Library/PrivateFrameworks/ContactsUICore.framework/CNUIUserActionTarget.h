/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNTUCallProvider;
@class NSString;

@interface CNUIUserActionTarget : NSObject {

	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _teamIdentifier;
	NSString* _actionType;
	id<CNTUCallProvider> _callProvider;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * actionType;                //@synthesize actionType=_actionType - In the implementation block
@property (retain) id<CNTUCallProvider> callProvider;                //@synthesize callProvider=_callProvider - In the implementation block
+(id)targetForDirections;
+(id)targetForTextWithMessages;
+(id)descriptorForRequiredKeysForActionDiscovering;
+(id)targetForEmailWithMail;
+(id)targetForPayWithWallet;
+(id)targetForVoiceWithTelephony;
+(id)targetForVoiceWithFaceTime;
+(id)targetForVoiceWithSkype;
+(id)targetForVideoWithFaceTime;
+(id)targetForVideoWithSkype;
+(id)targetForTextWithSkype;
+(id)targetForVoiceWithCallProvider:(id)arg1 ;
+(id)targetForVideoWithCallProvider:(id)arg1 ;
+(id)targetForStartAudioCallIntentWithAppProxy:(id)arg1 ;
+(id)targetForStartVideoCallIntentWithAppProxy:(id)arg1 ;
+(id)targetForSendMessageIntentWithAppProxy:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(NSString *)actionType;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id<CNTUCallProvider>)callProvider;
-(void)setCallProvider:(id<CNTUCallProvider>)arg1 ;
-(id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 teamIdentifier:(id)arg3 ;
-(id)actionsForPostalAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
@end

