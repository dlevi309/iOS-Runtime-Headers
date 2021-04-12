/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/

#import <TextInputCore/TIWordSearchOperationGetCandidates.h>

@class NSArray;

@interface TIWordSearchChinesePhoneticOperationGetCandidates : TIWordSearchOperationGetCandidates {

	NSArray* _disambiguationCandidates;
	unsigned long long _selectedDisambiguationCandidateIndex;

}

@property (nonatomic,readonly) NSArray * disambiguationCandidates;                                   //@synthesize disambiguationCandidates=_disambiguationCandidates - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedDisambiguationCandidateIndex;              //@synthesize selectedDisambiguationCandidateIndex=_selectedDisambiguationCandidateIndex - In the implementation block
-(NSArray *)disambiguationCandidates;
-(unsigned long long)selectedDisambiguationCandidateIndex;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 keyboardInput:(id)arg3 segmentBreakIndex:(unsigned long long)arg4 disambiguationCandidates:(id)arg5 selectedDisambiguationCandidateIndex:(unsigned long long)arg6 predictionEnabled:(BOOL)arg7 reanalysisMode:(BOOL)arg8 target:(id)arg9 action:(SEL)arg10 geometryModelData:(id)arg11 hardwareKeyboardMode:(BOOL)arg12 logger:(id)arg13 ;
@end

