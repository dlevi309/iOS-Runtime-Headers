/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setIsVoiceOverTouchEnabled:(long long)arg1 ;
-(void)setIsVibrationDisabled:(long long)arg1 ;
@end

