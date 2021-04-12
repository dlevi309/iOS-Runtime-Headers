/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class TIInputMode, NSDate, TILanguageModelAdaptationContext;

@interface TILanguageModelOfflineLearningHandle : NSObject {

	BOOL _valid;
	TIInputMode* _inputMode;
	NSDate* _lastAdaptationDate;
	TILanguageModelAdaptationContext* _currentAdaptationContext;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                                              //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSDate * lastAdaptationDate;                                              //@synthesize lastAdaptationDate=_lastAdaptationDate - In the implementation block
@property (nonatomic,copy) TILanguageModelAdaptationContext * currentAdaptationContext;              //@synthesize currentAdaptationContext=_currentAdaptationContext - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;                                              //@synthesize valid=_valid - In the implementation block
+(id)handleForInputMode:(id)arg1 ;
+(id)handleForLanguageLikelihood;
-(void)load;
-(BOOL)isValid;
-(TIInputMode *)inputMode;
-(void)setValid:(BOOL)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(void)didFinishLearning;
-(void)updateAdaptationContext:(id)arg1 ;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
-(TILanguageModelAdaptationContext *)currentAdaptationContext;
-(void)setLastAdaptationDate:(NSDate *)arg1 ;
-(NSDate *)lastAdaptationDate;
-(void)setCurrentAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
@end

