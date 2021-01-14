/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

