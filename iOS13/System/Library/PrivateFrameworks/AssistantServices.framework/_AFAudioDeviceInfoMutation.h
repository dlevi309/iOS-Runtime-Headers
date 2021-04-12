/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFAudioDeviceInfoMutating.h>

@class AFAudioDeviceInfo, NSString, NSUUID;

@interface _AFAudioDeviceInfoMutation : NSObject <AFAudioDeviceInfoMutating> {

	AFAudioDeviceInfo* _baseModel;
	NSString* _route;
	BOOL _isRemoteDevice;
	NSUUID* _deviceUID;
	struct {
		unsigned isDirty : 1;
		unsigned hasRoute : 1;
		unsigned hasIsRemoteDevice : 1;
		unsigned hasDeviceUID : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setRoute:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setDeviceUID:(id)arg1 ;
-(void)setIsRemoteDevice:(BOOL)arg1 ;
@end

