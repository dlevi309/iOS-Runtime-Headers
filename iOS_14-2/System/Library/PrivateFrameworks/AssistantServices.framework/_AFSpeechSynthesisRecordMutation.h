/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFSpeechSynthesisRecordMutating.h>

@class AFSpeechSynthesisRecord, NSString;

@interface _AFSpeechSynthesisRecordMutation : NSObject <AFSpeechSynthesisRecordMutating> {

	AFSpeechSynthesisRecord* _baseModel;
	NSString* _utterance;
	unsigned long long _beginTimestamp;
	unsigned long long _endTimestamp;
	struct {
		unsigned isDirty : 1;
		unsigned hasUtterance : 1;
		unsigned hasBeginTimestamp : 1;
		unsigned hasEndTimestamp : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setUtterance:(id)arg1 ;
-(id)generate;
-(void)setBeginTimestamp:(unsigned long long)arg1 ;
-(void)setEndTimestamp:(unsigned long long)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
@end

