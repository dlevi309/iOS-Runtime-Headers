/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/


@class NSArray, NSString;

@interface PREResponsesGeneratedEvent : NSObject {

	BOOL _isCached;
	BOOL _hasQuestionMark;
	int _generationStatus;
	NSArray* _responses;
	NSString* _language;
	NSString* _locale;
	unsigned long long _responseTimePerf;
	unsigned long long _messageCharCount;
	unsigned long long _responseGenerationTime;

}

@property (nonatomic,retain) NSArray * responses;                                    //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSString * language;                                    //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSString * locale;                                      //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL isCached;                                          //@synthesize isCached=_isCached - In the implementation block
@property (assign,nonatomic) unsigned long long responseTimePerf;                    //@synthesize responseTimePerf=_responseTimePerf - In the implementation block
@property (assign,nonatomic) unsigned long long messageCharCount;                    //@synthesize messageCharCount=_messageCharCount - In the implementation block
@property (assign,nonatomic) BOOL hasQuestionMark;                                   //@synthesize hasQuestionMark=_hasQuestionMark - In the implementation block
@property (assign,nonatomic) unsigned long long responseGenerationTime;              //@synthesize responseGenerationTime=_responseGenerationTime - In the implementation block
@property (assign,nonatomic) int generationStatus;                                   //@synthesize generationStatus=_generationStatus - In the implementation block
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)isCached;
-(void)setIsCached:(BOOL)arg1 ;
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(int)generationStatus;
-(void)setGenerationStatus:(int)arg1 ;
-(void)setHasQuestionMark:(BOOL)arg1 ;
-(BOOL)hasQuestionMark;
-(void)setResponseTimePerf:(unsigned long long)arg1 ;
-(unsigned long long)responseTimePerf;
-(unsigned long long)messageCharCount;
-(void)setMessageCharCount:(unsigned long long)arg1 ;
-(unsigned long long)responseGenerationTime;
-(void)setResponseGenerationTime:(unsigned long long)arg1 ;
@end

