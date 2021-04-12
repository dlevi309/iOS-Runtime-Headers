/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class CNUIIDSAvailabilityProvider;

@interface CNUIIDSContactPropertyResolver : NSObject {

	CNUIIDSAvailabilityProvider* _idsAvailabilityProvider;

}

@property (nonatomic,readonly) CNUIIDSAvailabilityProvider * idsAvailabilityProvider;              //@synthesize idsAvailabilityProvider=_idsAvailabilityProvider - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)descriptorForCopyingStrippedContact:(id)arg1 ;
+(id)IDSRelevantPropertiesForContact:(id)arg1 ;
-(id)initWithIDSAvailabilityProvider:(id)arg1 ;
-(CNUIIDSAvailabilityProvider *)idsAvailabilityProvider;
-(id)resolveBestIMessageIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)resolveBestFaceTimeIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)resolveBestIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 usingAvailabilityProviderCall:(/*^block*/id)arg3 ;
@end

