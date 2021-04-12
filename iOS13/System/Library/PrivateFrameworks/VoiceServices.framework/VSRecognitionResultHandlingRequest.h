/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@protocol VSRecognitionResultHandler;
@class NSArray, VSRecognitionAction;

@interface VSRecognitionResultHandlingRequest : NSObject {

	id<VSRecognitionResultHandler> _handler;
	NSArray* _results;
	VSRecognitionAction* _action;

}
-(void)dealloc;
-(id)handler;
-(id)results;
-(id)initWithHandler:(id)arg1 results:(id)arg2 ;
-(id)nextAction;
-(void)setNextAction:(id)arg1 ;
@end

