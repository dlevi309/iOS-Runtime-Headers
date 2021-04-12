/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRTextDetector : NSObject {

	BOOL _shouldCancel;

}

@property (assign) BOOL shouldCancel;              //@synthesize shouldCancel=_shouldCancel - In the implementation block
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)shouldCancel;
-(void)setShouldCancel:(BOOL)arg1 ;
-(unsigned long long)numScalesForImage:(id)arg1 options:(id)arg2 ;
-(BOOL)detectTextCandidatesInImage:(id)arg1 atScale:(long long)arg2 forNumScales:(long long)arg3 toDocument:(Document*)arg4 options:(id)arg5 ;
-(BOOL)formInitialTextLines:(Document*)arg1 withIncludedCandidates:(vector<bool, std::__1::allocator<bool> >*)arg2 options:(id)arg3 ;
-(BOOL)filterTextLines:(vector<TextDetector::Word, std::__1::allocator<TextDetector::Word> >*)arg1 withIncludedCandidates:(vector<bool, std::__1::allocator<bool> >*)arg2 options:(id)arg3 ;
-(BOOL)regroupTextLinesForChinese:(vector<TextDetector::Word, std::__1::allocator<TextDetector::Word> >*)arg1 withIncludedCandidates:(const vector<bool, std::__1::allocator<bool> >*)arg2 options:(id)arg3 ;
-(id)generateOutputFeatures:(vector<TextDetector::Word, std::__1::allocator<TextDetector::Word> >*)arg1 forImageSize:(Size_<unsigned long>*)arg2 withIncludedCandidates:(const vector<bool, std::__1::allocator<bool> >*)arg3 options:(id)arg4 ;
-(id)detectCITextFeaturesInImage:(id)arg1 withThresholdingAlgorithm:(long long)arg2 options:(id)arg3 ;
-(id)charLevelNMSDetectTextInImage:(id)arg1 logIntermediateDetectorResult:(id*)arg2 options:(id)arg3 ;
-(id)charLevelNMSDetectFutharkTextInImage:(id)arg1 logIntermediateDetectorResult:(id*)arg2 options:(id)arg3 ;
-(id)detectCITextFeaturesInImage:(id)arg1 options:(id)arg2 ;
-(id)detectTextInImage:(id)arg1 logIntermediateDetectorResult:(id*)arg2 options:(id)arg3 ;
@end

