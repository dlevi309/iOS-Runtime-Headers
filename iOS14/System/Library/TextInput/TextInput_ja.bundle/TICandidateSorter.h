/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/


#import <TextInput_ja/TextInput_ja-Structs.h>
@interface TICandidateSorter : NSObject {

	IDXIndexRef _index;
	CFDictionaryRef _radicalToSortPosition;

}

@property (assign) IDXIndexRef index;                                  //@synthesize index=_index - In the implementation block
@property (assign) CFDictionaryRef radicalToSortPosition;              //@synthesize radicalToSortPosition=_radicalToSortPosition - In the implementation block
-(IDXIndexRef)index;
-(id)init;
-(void)setIndex:(IDXIndexRef)arg1 ;
-(void)dealloc;
-(BOOL)hasCandidatesFromCandidates:(id)arg1 inputString:(id)arg2 sortedBy:(unsigned long long)arg3 omittingEmoji:(BOOL)arg4 ;
-(id)candidatesFromCandidates:(id)arg1 inputString:(id)arg2 sortedBy:(unsigned long long)arg3 omittingEmoji:(BOOL)arg4 ;
-(void)setRadicalToSortPosition:(CFDictionaryRef)arg1 ;
-(BOOL)getInfoForCharacter:(id)arg1 strokeCount:(unsigned long long*)arg2 radicals:(id*)arg3 yomis:(id*)arg4 ;
-(CFDictionaryRef)radicalToSortPosition;
-(BOOL)hasCandidatesSortedByRadicalFromCandidates:(id)arg1 ;
-(BOOL)hasCandidatesSortedByYomiFromCandidates:(id)arg1 inputString:(id)arg2 ;
-(BOOL)hasCandidatesSortedByFacemarkCategoryFromCandidates:(id)arg1 ;
-(id)candidatesSortedByRadicalFromCandidates:(id)arg1 ;
-(id)candidatesSortedByYomiFromCandidates:(id)arg1 inputString:(id)arg2 ;
@end

