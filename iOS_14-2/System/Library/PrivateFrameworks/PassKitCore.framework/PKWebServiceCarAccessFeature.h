/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKWebServiceRegionFeature.h>

@class PKOSVersionRequirementRange, NSArray;

@interface PKWebServiceCarAccessFeature : PKWebServiceRegionFeature {

	PKOSVersionRequirementRange* _ownerSharingOSVersionRequirement;
	PKOSVersionRequirementRange* _friendSharingOSVersionRequirement;
	NSArray* _supportedTerminals;

}

@property (nonatomic,readonly) PKOSVersionRequirementRange * ownerSharingOSVersionRequirement;               //@synthesize ownerSharingOSVersionRequirement=_ownerSharingOSVersionRequirement - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirementRange * friendSharingOSVersionRequirement;              //@synthesize friendSharingOSVersionRequirement=_friendSharingOSVersionRequirement - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedTerminals;                                            //@synthesize supportedTerminals=_supportedTerminals - In the implementation block
-(id)initWithDictionary:(id)arg1 region:(id)arg2 ;
-(id)localizedNameForIssuerWithIdentifier:(id)arg1 ;
-(PKOSVersionRequirementRange *)ownerSharingOSVersionRequirement;
-(NSArray *)supportedTerminals;
-(PKOSVersionRequirementRange *)friendSharingOSVersionRequirement;
@end

