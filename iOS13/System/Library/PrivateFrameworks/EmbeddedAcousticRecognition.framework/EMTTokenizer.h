/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@protocol OS_dispatch_queue;
@class _EARFormatter, NSObject, NSLocale;

@interface EMTTokenizer : NSObject {

	_EARFormatter* _formatter;
	NSObject*<OS_dispatch_queue> _queue;
	NSLocale* _outputLocale;

}

@property (nonatomic,readonly) NSLocale * outputLocale;              //@synthesize outputLocale=_outputLocale - In the implementation block
-(id)initWithModelURL:(id)arg1 ;
-(id)format:(id)arg1 preToPostItnMap:(id)arg2 ;
-(id)format:(id)arg1 ;
-(NSLocale *)outputLocale;
@end

