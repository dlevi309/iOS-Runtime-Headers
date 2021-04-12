/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@class NSDictionary, _EARLanguageDetectorRequestContext;

@interface _EARLanguageDetectorLoggingInfo : NSObject {

	NSDictionary* _loggingDict;
	_EARLanguageDetectorRequestContext* _context;

}

@property (nonatomic,copy) NSDictionary * loggingDict;                                //@synthesize loggingDict=_loggingDict - In the implementation block
@property (nonatomic,copy) _EARLanguageDetectorRequestContext * context;              //@synthesize context=_context - In the implementation block
-(_EARLanguageDetectorRequestContext *)context;
-(void)setContext:(_EARLanguageDetectorRequestContext *)arg1 ;
-(NSDictionary *)loggingDict;
-(void)setLoggingDict:(NSDictionary *)arg1 ;
@end

