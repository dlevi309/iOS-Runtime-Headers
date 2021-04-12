/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(long long)touchCount;
-(void)visitRecordSync:(id)arg1 ;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(void)visitRecordHitTest:(id)arg1 ;
-(void)visitRecordSkipHitTest:(id)arg1 ;
-(void)visitRecordTextAccepted:(id)arg1 ;
-(void)visitRecordCandidateRejected:(id)arg1 ;
-(id)structuredReport;
-(id)aggregateReport;
-(void)handleTouch:(id)arg1 ;
-(void)updateTextWithAcceptedCandidate:(id)arg1 ;
-(long long)characterCount;
-(long long)predictedCharacterCount;
-(long long)backspaceCount;
-(long long)autocorrectionCount;
-(long long)rejectedCandidateCount;
-(long long)backspaceIntoAutocorrectionCount;
-(long long)predictiveSelectionCount;
-(long long)falseBackspaceCount;
-(long long)falseBackspaceIntoAutocorrectionCount;
-(NSMutableString *)recentText;
-(NSMutableArray *)recentAutocorrectionLocations;
-(NSMutableString *)recentTextBeforeBackspace;
-(NSMutableString *)recentTextAfterBackspace;
-(BOOL)backspacedIntoAutocorrection;
-(void)setBackspacedIntoAutocorrection:(BOOL)arg1 ;
@end

