/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)actionType;
-(id)init;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(unsigned long long)hash;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id<CNTUCallProvider>)callProvider;
-(void)setCallProvider:(id<CNTUCallProvider>)arg1 ;
-(id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 teamIdentifier:(id)arg3 ;
-(id)actionsForPostalAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
@end

