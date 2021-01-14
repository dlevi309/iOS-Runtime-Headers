/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@protocol VSRecognitionResultHandler;
@class NSArray, VSRecognitionAction;

@interface VSRecognitionResultHandlingRequest : NSObject {

	id<VSRecognitionResultHandler> _handler;
	NSArray* _results;
	VSRecognitionAction* _action;

}
-(id)results;
-(id)nextAction;
-(id)handler;
-(id)initWithHandler:(id)arg1 results:(id)arg2 ;
-(void)setNextAction:(id)arg1 ;
-(void)dealloc;
@end

