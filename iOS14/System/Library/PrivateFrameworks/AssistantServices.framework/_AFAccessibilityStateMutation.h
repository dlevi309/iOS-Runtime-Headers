/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFAccessibilityStateMutating.h>

@class AFAccessibilityState, NSString;

@interface _AFAccessibilityStateMutation : NSObject <AFAccessibilityStateMutating> {

	AFAccessibilityState* _baseModel;
	long long _isVoiceOverTouchEnabled;
	long long _isVibrationDisabled;
	struct {
		unsigned isDirty : 1;
		unsigned hasIsVoiceOverTouchEnabled : 1;
		unsigned hasIsVibrationDisabled : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setIsVoiceOverTouchEnabled:(long long)arg1 ;
-(void)setIsVibrationDisabled:(long long)arg1 ;
@end

