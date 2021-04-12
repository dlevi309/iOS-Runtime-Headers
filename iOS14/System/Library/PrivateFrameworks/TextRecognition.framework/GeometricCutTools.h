/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface GeometricCutTools : NSObject
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andLineThroughPoint:(CGPoint)arg3 andPoint:(CGPoint)arg4 intersectAt:(CGPoint*)arg5 ;
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andSegmentStartingAt:(CGPoint)arg3 andEndingAt:(CGPoint)arg4 intersectAt:(CGPoint*)arg5 ;
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andRectangle:(CGRect)arg3 intersectAtPoint:(CGPoint*)arg4 andPoint:(CGPoint*)arg5 ;
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andImageWithSize:(CGSize)arg3 intersectAtPoint:(CGPoint*)arg4 andPoint:(CGPoint*)arg5 ;
+(id)widestVersionOfRect:(id)arg1 insideImageWithSize:(CGSize)arg2 ;
+(BOOL)isPointArrayARectangle:(id)arg1 ;
+(id)boxInNormalizedSpace:(id)arg1 toImageSpaceWithSize:(CGSize)arg2 plusPadding:(CGPoint)arg3 destSize:(CGSize*)arg4 networkInputSize:(CGSize)arg5 ;
+(id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(vImage_Buffer*)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withCodeMap:(const int*)arg6 activations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg7 invert:(BOOL)arg8 networkInputSize:(CGSize)arg9 ;
+(id)stringByInjectingSpaces:(id)arg1 textFeatures:(id)arg2 improved:(BOOL)arg3 ;
+(id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(vImage_Buffer*)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withCodeMap:(const int*)arg6 activations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg7 invert:(BOOL)arg8 networkInputSize:(CGSize)arg9 garbageSymbol:(unsigned short)arg10 ;
+(id)cleanTextDetectorOutput:(id)arg1 ;
+(id)findCorrectedBoundingBoxOfTextFeature:(id)arg1 inImageWithSize:(CGSize)arg2 ;
+(BOOL)derotateContentsOf:(id)arg1 inImage:(vImage_Buffer*)arg2 andOutputTo:(vImage_Buffer*)arg3 withPadding:(CGPoint)arg4 networkInputSize:(CGSize)arg5 ;
+(id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(vImage_Buffer*)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withNetwork:(CHNeuralNetwork*)arg6 activations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg7 invert:(BOOL)arg8 ;
+(id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(vImage_Buffer*)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withNetwork:(CHNeuralNetwork*)arg6 activations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg7 invert:(BOOL)arg8 garbageSymbol:(unsigned short)arg9 ;
+(id)geometricRecognitionCandidatesOf:(id)arg1 inDerotatedRegion:(vImage_Buffer*)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withNetwork:(CHNeuralNetwork*)arg6 activations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg7 invert:(BOOL)arg8 recognitionWindowSize:(CGSize)arg9 ;
@end

