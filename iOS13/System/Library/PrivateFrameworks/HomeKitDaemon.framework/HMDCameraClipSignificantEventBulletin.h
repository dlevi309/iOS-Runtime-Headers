/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSString, NSURL, NSDate, NSArray, HMDCameraProfile, HMDHome, HMDService, HMDAccessory, NSUUID, NSDictionary;

@interface HMDCameraClipSignificantEventBulletin : NSObject {

	BOOL _shouldShowProvideFeedbackButton;
	NSString* _title;
	NSString* _body;
	NSString* _threadIdentifier;
	NSString* _requestIdentifier;
	NSURL* _previewImageFilePathURL;
	NSDate* _dateOfOccurrence;
	NSArray* _notificationUUIDs;
	HMDCameraProfile* _camera;
	HMDHome* _home;
	HMDService* _service;
	HMDAccessory* _accessory;
	NSUUID* _clipUUID;

}

@property (readonly) HMDCameraProfile * camera;                         //@synthesize camera=_camera - In the implementation block
@property (readonly) HMDHome * home;                                    //@synthesize home=_home - In the implementation block
@property (readonly) HMDService * service;                              //@synthesize service=_service - In the implementation block
@property (readonly) HMDAccessory * accessory;                          //@synthesize accessory=_accessory - In the implementation block
@property (copy,readonly) NSUUID * clipUUID;                            //@synthesize clipUUID=_clipUUID - In the implementation block
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSString * body;                              //@synthesize body=_body - In the implementation block
@property (copy,readonly) NSString * threadIdentifier;                  //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (copy,readonly) NSString * requestIdentifier;                 //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (readonly) NSURL * previewImageFilePathURL;                   //@synthesize previewImageFilePathURL=_previewImageFilePathURL - In the implementation block
@property (copy,readonly) NSDate * dateOfOccurrence;                    //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
@property (copy,readonly) NSArray * notificationUUIDs;                  //@synthesize notificationUUIDs=_notificationUUIDs - In the implementation block
@property (readonly) BOOL shouldShowProvideFeedbackButton;              //@synthesize shouldShowProvideFeedbackButton=_shouldShowProvideFeedbackButton - In the implementation block
+(id)localizedMessageForSignificantEvent:(unsigned long long)arg1 cameraName:(id)arg2 ;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(HMDHome *)home;
-(HMDService *)service;
-(NSString *)body;
-(NSString *)requestIdentifier;
-(HMDCameraProfile *)camera;
-(HMDAccessory *)accessory;
-(NSString *)threadIdentifier;
-(NSDate *)dateOfOccurrence;
-(NSArray *)notificationUUIDs;
-(NSUUID *)clipUUID;
-(id)initWithNotificationUUIDs:(id)arg1 previewImageFilePathURL:(id)arg2 significantEvent:(unsigned long long)arg3 dateOfOccurrence:(id)arg4 camera:(id)arg5 home:(id)arg6 accessory:(id)arg7 recordingService:(id)arg8 clipUUID:(id)arg9 shouldShowProvideFeedbackButton:(BOOL)arg10 ;
-(NSURL *)previewImageFilePathURL;
-(BOOL)shouldShowProvideFeedbackButton;
@end

