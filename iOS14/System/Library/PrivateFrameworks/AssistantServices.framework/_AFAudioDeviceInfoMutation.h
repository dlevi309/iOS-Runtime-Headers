/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRoute:(id)arg1 ;
-(id)init;
-(void)setDeviceUID:(id)arg1 ;
-(void)setIsRemoteDevice:(BOOL)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

