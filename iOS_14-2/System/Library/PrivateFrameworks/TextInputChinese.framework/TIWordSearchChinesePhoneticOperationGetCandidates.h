/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)selectedDisambiguationCandidateIndex;
-(NSArray *)disambiguationCandidates;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 keyboardInput:(id)arg3 segmentBreakIndex:(unsigned long long)arg4 disambiguationCandidates:(id)arg5 selectedDisambiguationCandidateIndex:(unsigned long long)arg6 predictionEnabled:(BOOL)arg7 reanalysisMode:(BOOL)arg8 target:(id)arg9 action:(SEL)arg10 geometryModelData:(id)arg11 hardwareKeyboardMode:(BOOL)arg12 logger:(id)arg13 ;
@end

