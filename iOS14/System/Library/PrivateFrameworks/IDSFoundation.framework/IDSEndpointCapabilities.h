/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IDSEndpointCapabilities : NSObject <NSSecureCoding> {

	char _supportsKeySharing;
	char _supportsHarmony;
	char _supportsFMDV2;
	char _supportsFMFenceV1;
	char _supportsLocationSharing;
	char _supportsScreenTimeV2;
	char _supportsIncomingFindMyV1;
	char _supportsActivitySharing;
	char _supportsManateeForAppleCash;
	char _supportsRegionForAppleCash;
	char _ecVersion;
	char _isC2KEquipment;
	char _showPeerErrors;
	char _nicknamesVersion;
	char _optionallyReceiveTypingIndicator;
	char _supportsInlineAttachments;
	char _supportsKeepReceipts;
	char _supportsStickersV1;
	char _supportsChatAppsV1;
	char _supportsBubbleEditingV1;
	char _supportsAcknowledgementsV1;
	char _supportsFullScreenMomentsV1;
	char _supportsFullScreenMomentsV2;
	char _supportsFullScreenMomentsV3;
	char _supportsInvisibleInkV1;
	char _supportsImpactEffectsV1;
	char _supportsUpdateAttachmentsV1;
	char _supportsAutoloopVideoV1;
	char _supportsMediaV2;
	char _supportsPhotosExtensionV1;
	char _supportsAudioMessagingV2;
	char _supportsAnimojiV2;
	char _supportsCertifiedDeliveryV1;
	char _supportsOriginalTimestampOrderingV1;
	char _supportsProtobufPayloadDataV2;
	char _supportsHEIFEncoding;
	char _supportsHDRVideo;
	char _prefersSDRVideo;

}
+(BOOL)supportsSecureCoding;
+(id)allowedCapabilities;
-(id)initWithCapabilitiesMap:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(BOOL)isEqualToEndpointCapabilites:(id)arg1 ;
-(long long)valueForCapability:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

