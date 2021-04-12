/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSString, NSArray;

@interface TUContactsDataProviderFetchRequest : NSObject {

	BOOL _useNetworkCountryCode;
	BOOL _voicemail;
	BOOL _emergency;
	BOOL _blocked;
	BOOL _conversation;
	BOOL _verified;
	BOOL _incoming;
	NSString* _contactIdentifier;
	NSArray* _auxiliaryKeysToFetch;
	NSString* _phoneNumberPrefixHint;
	NSString* _callerNameFromNetwork;
	NSString* _isoCountryCode;
	NSArray* _handles;

}

@property (getter=isVoicemail,nonatomic,readonly) BOOL voicemail;                    //@synthesize voicemail=_voicemail - In the implementation block
@property (getter=isEmergency,nonatomic,readonly) BOOL emergency;                    //@synthesize emergency=_emergency - In the implementation block
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked;                        //@synthesize blocked=_blocked - In the implementation block
@property (getter=isConversation,nonatomic,readonly) BOOL conversation;              //@synthesize conversation=_conversation - In the implementation block
@property (getter=isVerified,nonatomic,readonly) BOOL verified;                      //@synthesize verified=_verified - In the implementation block
@property (getter=isIncoming,nonatomic,readonly) BOOL incoming;                      //@synthesize incoming=_incoming - In the implementation block
@property (nonatomic,copy,readonly) NSString * callerNameFromNetwork;                //@synthesize callerNameFromNetwork=_callerNameFromNetwork - In the implementation block
@property (nonatomic,copy,readonly) NSString * isoCountryCode;                       //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * handles;                               //@synthesize handles=_handles - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                             //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * auxiliaryKeysToFetch;                           //@synthesize auxiliaryKeysToFetch=_auxiliaryKeysToFetch - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberPrefixHint;                         //@synthesize phoneNumberPrefixHint=_phoneNumberPrefixHint - In the implementation block
@property (assign,nonatomic) BOOL useNetworkCountryCode;                             //@synthesize useNetworkCountryCode=_useNetworkCountryCode - In the implementation block
-(id)init;
-(id)description;
-(BOOL)isBlocked;
-(NSString *)contactIdentifier;
-(NSString *)isoCountryCode;
-(NSArray *)handles;
-(BOOL)isIncoming;
-(id)initWithHandle:(id)arg1 ;
-(BOOL)isVerified;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(BOOL)isConversation;
-(id)initWithCall:(id)arg1 ;
-(id)initWithHandles:(id)arg1 ;
-(BOOL)useNetworkCountryCode;
-(NSArray *)auxiliaryKeysToFetch;
-(NSString *)callerNameFromNetwork;
-(BOOL)isVoicemail;
-(BOOL)isEmergency;
-(NSString *)phoneNumberPrefixHint;
-(void)setAuxiliaryKeysToFetch:(NSArray *)arg1 ;
-(void)setPhoneNumberPrefixHint:(NSString *)arg1 ;
-(void)setUseNetworkCountryCode:(BOOL)arg1 ;
@end

