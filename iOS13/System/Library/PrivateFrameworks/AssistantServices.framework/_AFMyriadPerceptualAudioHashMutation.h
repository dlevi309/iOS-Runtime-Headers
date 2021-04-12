/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMyriadPerceptualAudioHashMutating.h>

@class AFMyriadPerceptualAudioHash, NSData, NSString;

@interface _AFMyriadPerceptualAudioHashMutation : NSObject <AFMyriadPerceptualAudioHashMutating> {

	AFMyriadPerceptualAudioHash* _baseModel;
	NSData* _data;
	struct {
		unsigned isDirty : 1;
		unsigned hasData : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setData:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
@end

