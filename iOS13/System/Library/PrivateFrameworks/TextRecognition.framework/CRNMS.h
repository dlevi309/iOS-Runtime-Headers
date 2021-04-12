/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRNMS : NSObject {

	unsigned long long secondRoundNMSOnLines;
	deque<nms::RectForest<unsigned short, float>, std::__1::allocator<nms::RectForest<unsigned short, float> > >* _wordForests;
	PyramidTokenizer<unsigned short, float>* _wordTokenizer;
	PyramidNMS<unsigned short, float, unsigned char>* _wordNMS;
	deque<nms::RectForest<unsigned short, float>, std::__1::allocator<nms::RectForest<unsigned short, float> > >* _postWordNMSForests;
	PyramidNMS<unsigned short, float, unsigned char>* _lineNMS;
	deque<nms::RectForest<unsigned short, float>, std::__1::allocator<nms::RectForest<unsigned short, float> > >* _postLineNMSForests;
	PyramidTokenizer<unsigned short, float>* _lineTokenizer;

}
-(id)initWithOptions:(id)arg1 ;
-(BOOL)addDocument:(Document*)arg1 withIncludedCandidates:(const vector<bool, std::__1::allocator<bool> >*)arg2 options:(id)arg3 ;
-(id)generateConsolidatedTextFeatures:(id)arg1 ;
-(BOOL)addTextFeatures:(id)arg1 options:(id)arg2 ;
-(BOOL)buildRectForest:(RectForest<unsigned short, float>*)arg1 fromDocument:(Document*)arg2 withIncludedCandidates:(const vector<bool, std::__1::allocator<bool> >*)arg3 options:(id)arg4 ;
-(BOOL)buildRectForest:(RectForest<unsigned short, float>*)arg1 fromTextFeatures:(id)arg2 options:(id)arg3 ;
-(id)buildTextFeaturesFromRectForest:(const RectForest<unsigned short, float>*)arg1 byEdge:(unsigned long long)arg2 options:(id)arg3 ;
-(unsigned long long)convertSubTextFeatures:(id)arg1 toRects:(valarray<float>*)arg2 ;
-(BOOL)fillRectForestDatum:(slice_array<float>*)arg1 withRect:(const Rect_<int>*)arg2 normalizedByPlaneWidth:(unsigned long long)arg3 andPlaneHeight:(unsigned long long)arg4 ;
-(void)fillRectForestDatum:(slice_array<float>*)arg1 withCGRect:(const CGRect*)arg2 ;
-(void)fillTextFeature:(id)arg1 withRectDatum:(const valarray<float>*)arg2 ;
-(unsigned long long)tokenizeTextFeature:(id)arg1 intoCutpoints:(deque<unsigned short, std::__1::allocator<unsigned short> >*)arg2 options:(id)arg3 ;
@end

