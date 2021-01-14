/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)format:(id)arg1 ;
-(id)initWithModelURL:(id)arg1 ;
-(id)format:(id)arg1 preToPostItnMap:(id)arg2 ;
-(NSLocale *)outputLocale;
@end

