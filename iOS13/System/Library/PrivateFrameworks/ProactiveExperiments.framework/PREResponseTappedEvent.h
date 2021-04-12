/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/


@class PREResponsesGeneratedEvent, NSString, NSNumber;

@interface PREResponseTappedEvent : NSObject {

	BOOL _hasQuestionMark;
	int _inputMethod;
	PREResponsesGeneratedEvent* _responsesGeneratedEvent;
	NSString* _selectedResponse;
	NSNumber* _selectedPosition;
	unsigned long long _timeToTap;

}

@property (nonatomic,retain) PREResponsesGeneratedEvent * responsesGeneratedEvent;              //@synthesize responsesGeneratedEvent=_responsesGeneratedEvent - In the implementation block
@property (nonatomic,retain) NSString * selectedResponse;                                       //@synthesize selectedResponse=_selectedResponse - In the implementation block
@property (nonatomic,retain) NSNumber * selectedPosition;                                       //@synthesize selectedPosition=_selectedPosition - In the implementation block
@property (assign,nonatomic) unsigned long long timeToTap;                                      //@synthesize timeToTap=_timeToTap - In the implementation block
@property (assign,nonatomic) int inputMethod;                                                   //@synthesize inputMethod=_inputMethod - In the implementation block
@property (assign,nonatomic) BOOL hasQuestionMark;                                              //@synthesize hasQuestionMark=_hasQuestionMark - In the implementation block
-(int)inputMethod;
-(void)setInputMethod:(int)arg1 ;
-(NSNumber *)selectedPosition;
-(void)setSelectedPosition:(NSNumber *)arg1 ;
-(void)setTimeToTap:(unsigned long long)arg1 ;
-(unsigned long long)timeToTap;
-(void)setHasQuestionMark:(BOOL)arg1 ;
-(BOOL)hasQuestionMark;
-(PREResponsesGeneratedEvent *)responsesGeneratedEvent;
-(void)setResponsesGeneratedEvent:(PREResponsesGeneratedEvent *)arg1 ;
-(NSString *)selectedResponse;
-(void)setSelectedResponse:(NSString *)arg1 ;
@end

