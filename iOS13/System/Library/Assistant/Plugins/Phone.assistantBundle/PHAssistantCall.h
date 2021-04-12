/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Phone.assistantBundle/Phone
*/

#import <SAObjects/SAPhoneCall.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@protocol OS_dispatch_queue;
@class CNContact, TUHandle, NSObject, CoreTelephonyClient, NSBundle, NSString;

@interface PHAssistantCall : SAPhoneCall <AFServiceCommand> {

	BOOL _hasComputedDestinationHandle;
	BOOL _hasComputedBackingContact;
	CNContact* _backingContact;
	TUHandle* _destinationHandle;
	NSObject*<OS_dispatch_queue> _serialQueue;
	CoreTelephonyClient* _telephonyClient;
	NSBundle* _voiceDialBundle;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) CoreTelephonyClient * telephonyClient;                  //@synthesize telephonyClient=_telephonyClient - In the implementation block
@property (nonatomic,readonly) NSBundle * voiceDialBundle;                             //@synthesize voiceDialBundle=_voiceDialBundle - In the implementation block
@property (nonatomic,readonly) TUHandle * destinationHandle;                           //@synthesize destinationHandle=_destinationHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasComputedDestinationHandle;                      //@synthesize hasComputedDestinationHandle=_hasComputedDestinationHandle - In the implementation block
@property (nonatomic,readonly) CNContact * backingContact;                             //@synthesize backingContact=_backingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasComputedBackingContact;                         //@synthesize hasComputedBackingContact=_hasComputedBackingContact - In the implementation block
@property (getter=isCarPlayActive,nonatomic,readonly) BOOL carPlayActive; 
@property (nonatomic,readonly) BOOL shouldApplyInternationalAssist; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEmergencyNumberOrIsWhiteListed:(id)arg1 forProvider:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)_validate;
-(id)ISOCountryCode;
-(id)destinationID;
-(CNContact *)backingContact;
-(CoreTelephonyClient *)telephonyClient;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)_copyExceptionsForCountryCode:(id)arg1 ;
-(void)_addFaceTimeAvailabilityListener;
-(TUHandle *)destinationHandle;
-(BOOL)shouldApplyInternationalAssist;
-(id)_voiceDialBundle;
-(BOOL)isCarPlayActive;
-(id)appPunchOutDialRequestWithEndpointIDSDestinationURI:(id)arg1 ;
-(void)_performAppPunchOutWithDialRequest:(id)arg1 withServiceHelper:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeFaceTimeAvailabilityListener;
-(NSBundle *)voiceDialBundle;
-(BOOL)hasComputedDestinationHandle;
-(BOOL)hasComputedBackingContact;
@end

