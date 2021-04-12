/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, NSDictionary, NSUUID;

@interface HMDCharacteristicResponseNotificationContext : HMFObject {

	BOOL _pendingMultiPartResponses;
	NSSet* _changedCharacteristics;
	NSDictionary* _notificationPayloadByAccessoryUUID;
	NSSet* _responseCharacteristics;
	NSUUID* _requestIdentifier;

}

@property (copy,readonly) NSUUID * requestIdentifier;                                                 //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (getter=hasPendingMultiPartResponses,readonly) BOOL pendingMultiPartResponses;              //@synthesize pendingMultiPartResponses=_pendingMultiPartResponses - In the implementation block
@property (copy,readonly) NSSet * changedCharacteristics;                                             //@synthesize changedCharacteristics=_changedCharacteristics - In the implementation block
@property (copy,readonly) NSDictionary * notificationPayloadByAccessoryUUID;                          //@synthesize notificationPayloadByAccessoryUUID=_notificationPayloadByAccessoryUUID - In the implementation block
@property (copy,readonly) NSSet * responseCharacteristics;                                            //@synthesize responseCharacteristics=_responseCharacteristics - In the implementation block
-(NSUUID *)requestIdentifier;
-(id)initWithRequestIdentifier:(id)arg1 responses:(id)arg2 pendingMultiPartResponses:(BOOL)arg3 ;
-(NSSet *)changedCharacteristics;
-(id)notificationWithHome:(id)arg1 ;
-(NSDictionary *)notificationPayloadByAccessoryUUID;
-(NSSet *)responseCharacteristics;
-(BOOL)hasPendingMultiPartResponses;
@end

