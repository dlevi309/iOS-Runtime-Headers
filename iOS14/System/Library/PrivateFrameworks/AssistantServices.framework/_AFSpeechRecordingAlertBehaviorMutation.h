/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFSpeechRecordingAlertBehaviorMutating.h>

@class AFSpeechRecordingAlertBehavior, NSString;

@interface _AFSpeechRecordingAlertBehaviorMutation : NSObject <AFSpeechRecordingAlertBehaviorMutating> {

	AFSpeechRecordingAlertBehavior* _baseModel;
	long long _style;
	long long _beepSoundID;
	struct {
		unsigned isDirty : 1;
		unsigned hasStyle : 1;
		unsigned hasBeepSoundID : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)generate;
-(void)setStyle:(long long)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setBeepSoundID:(long long)arg1 ;
@end

