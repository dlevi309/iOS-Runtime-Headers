/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSURL, HFHomeKitDispatcher, NAFuture;

@interface HFURLComponents : NSObject {

	NSURL* _URL;
	HFHomeKitDispatcher* _homeKitDispatcher;

}

@property (nonatomic,readonly) HFHomeKitDispatcher * homeKitDispatcher;              //@synthesize homeKitDispatcher=_homeKitDispatcher - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                          //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) unsigned long long destination; 
@property (nonatomic,readonly) unsigned long long secondaryDestination; 
@property (nonatomic,readonly) NAFuture * homeKitObjectFuture; 
+(BOOL)isHomeAppURL:(id)arg1 ;
+(id)aboutResidentDeviceURL;
+(id)fixSymptomURLForAccessoryWithUUID:(id)arg1 symptom:(id)arg2 ;
+(id)_URLComponentsForDestination:(unsigned long long)arg1 ;
+(id)networkRoutersSettingsURL;
+(id)siriPrivacyURL;
+(id)musicPrivacyURL;
+(id)locationPrivacyURL;
+(id)musicLoginURL;
+(id)fixSymptomURLForAccessory:(id)arg1 symptom:(id)arg2 ;
+(id)aboutImproveSiriAndDictationURL;
+(id)symptomFromURL:(id)arg1 accessory:(id)arg2 ;
+(id)homeKitObjectURLForDestination:(unsigned long long)arg1 secondaryDestination:(unsigned long long)arg2 UUID:(id)arg3 ;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(unsigned long long)destination;
-(id)valueForParameter:(id)arg1 ;
-(id)_homeKitIdentifier;
-(id)initWithURL:(id)arg1 homeKitDispatcher:(id)arg2 ;
-(HFHomeKitDispatcher *)homeKitDispatcher;
-(unsigned long long)secondaryDestination;
-(NAFuture *)homeKitObjectFuture;
@end

