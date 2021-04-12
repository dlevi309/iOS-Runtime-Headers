/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IDSEndpointCapabilities : NSObject <NSSecureCoding> {

	char _showPeerErrors;
	char _supportsInlineAttachments;
	char _supportsKeepReceipts;
	char _supportsLocationSharing;
	char _supportsStickersV1;
	char _supportsChatAppsV1;
	char _supportsBubbleEditingV1;
	char _supportsAcknowledgementsV1;
	char _supportsFullScreenMomentsV1;
	char _supportsFullScreenMomentsV2;
	char _supportsFullScreenMomentsV3;
	char _supportsScreenTimeV2;
	char _supportsIncomingFindMyV1;
	char _supportsInvisibleInkV1;
	char _supportsImpactEffectsV1;
	char _supportsUpdateAttachmentsV1;
	char _supportsAutoloopVideoV1;
	char _supportsMediaV2;
	char _supportsActivitySharing;
	char _optionallyReceiveTypingIndicator;
	char _isC2KEquipment;
	char _supportsPhotosExtensionV1;
	char _supportsAudioMessagingV2;
	char _supportsAnimojiV2;
	char _supportsCertifiedDeliveryV1;
	char _supportsOriginalTimestampOrderingV1;
	char _nicknamesVersion;
	char _ecVersion;
	char _supportsKeySharing;
	char _supportsProtobufPayloadDataV2;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToEndpointCapabilites:(id)arg1 ;
-(id)initWithCapabilitiesMap:(id)arg1 ;
-(long long)valueForCapability:(id)arg1 ;
@end

