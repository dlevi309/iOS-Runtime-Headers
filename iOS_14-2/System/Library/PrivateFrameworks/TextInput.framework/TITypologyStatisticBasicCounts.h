/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyStatisticCurrentAutocorrections.h>

@class NSMutableString, NSMutableArray;

@interface TITypologyStatisticBasicCounts : TITypologyStatisticCurrentAutocorrections {

	BOOL _backspacedIntoAutocorrection;
	long long _touchCount;
	long long _characterCount;
	long long _predictedCharacterCount;
	long long _backspaceCount;
	long long _autocorrectionCount;
	long long _rejectedCandidateCount;
	long long _backspaceIntoAutocorrectionCount;
	long long _predictiveSelectionCount;
	long long _falseBackspaceCount;
	long long _falseBackspaceIntoAutocorrectionCount;
	NSMutableString* _recentText;
	NSMutableArray* _recentAutocorrectionLocations;
	NSMutableString* _recentTextBeforeBackspace;
	NSMutableString* _recentTextAfterBackspace;

}

@property (nonatomic,readonly) NSMutableString * recentText;                                 //@synthesize recentText=_recentText - In the implementation block
@property (nonatomic,readonly) NSMutableArray * recentAutocorrectionLocations;               //@synthesize recentAutocorrectionLocations=_recentAutocorrectionLocations - In the implementation block
@property (nonatomic,readonly) NSMutableString * recentTextBeforeBackspace;                  //@synthesize recentTextBeforeBackspace=_recentTextBeforeBackspace - In the implementation block
@property (nonatomic,readonly) NSMutableString * recentTextAfterBackspace;                   //@synthesize recentTextAfterBackspace=_recentTextAfterBackspace - In the implementation block
@property (assign,nonatomic) BOOL backspacedIntoAutocorrection;                              //@synthesize backspacedIntoAutocorrection=_backspacedIntoAutocorrection - In the implementation block
@property (nonatomic,readonly) long long touchCount;                                         //@synthesize touchCount=_touchCount - In the implementation block
@property (nonatomic,readonly) long long characterCount;                                     //@synthesize characterCount=_characterCount - In the implementation block
@property (nonatomic,readonly) long long predictedCharacterCount;                            //@synthesize predictedCharacterCount=_predictedCharacterCount - In the implementation block
@property (nonatomic,readonly) long long backspaceCount;                                     //@synthesize backspaceCount=_backspaceCount - In the implementation block
@property (nonatomic,readonly) long long autocorrectionCount;                                //@synthesize autocorrectionCount=_autocorrectionCount - In the implementation block
@property (nonatomic,readonly) long long rejectedCandidateCount;                             //@synthesize rejectedCandidateCount=_rejectedCandidateCount - In the implementation block
@property (nonatomic,readonly) long long backspaceIntoAutocorrectionCount;                   //@synthesize backspaceIntoAutocorrectionCount=_backspaceIntoAutocorrectionCount - In the implementation block
@property (nonatomic,readonly) long long predictiveSelectionCount;                           //@synthesize predictiveSelectionCount=_predictiveSelectionCount - In the implementation block
@property (nonatomic,readonly) long long falseBackspaceCount;                                //@synthesize falseBackspaceCount=_falseBackspaceCount - In the implementation block
@property (nonatomic,readonly) long long falseBackspaceIntoAutocorrectionCount;              //@synthesize falseBackspaceIntoAutocorrectionCount=_falseBackspaceIntoAutocorrectionCount - In the implementation block
-(long long)characterCount;
-(void)visitRecordTextAccepted:(id)arg1 ;
-(id)init;
-(long long)falseBackspaceCount;
-(long long)falseBackspaceIntoAutocorrectionCount;
-(long long)autocorrectionCount;
-(NSMutableString *)recentTextAfterBackspace;
-(NSMutableString *)recentTextBeforeBackspace;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(id)aggregateReport;
-(long long)backspaceIntoAutocorrectionCount;
-(NSMutableArray *)recentAutocorrectionLocations;
-(void)visitRecordHitTest:(id)arg1 ;
-(long long)predictiveSelectionCount;
-(long long)touchCount;
-(BOOL)backspacedIntoAutocorrection;
-(void)setBackspacedIntoAutocorrection:(BOOL)arg1 ;
-(NSMutableString *)recentText;
-(long long)rejectedCandidateCount;
-(void)visitRecordSync:(id)arg1 ;
-(void)handleTouch:(id)arg1 ;
-(long long)backspaceCount;
-(void)visitRecordSkipHitTest:(id)arg1 ;
-(long long)predictedCharacterCount;
-(id)structuredReport;
-(void)visitRecordCandidateRejected:(id)arg1 ;
-(void)updateTextWithAcceptedCandidate:(id)arg1 ;
@end

