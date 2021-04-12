/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class NSMutableArray, NSArray;

@interface MiroAnalysisTitleColorFinder : NSObject {

	int _height;
	int _width;
	int _heightOrg;
	int _widthOrg;
	char* _binIndexMap;
	float* _imageDataHSV;
	int _bpr;
	float _fv[36];
	vector<int, std::__1::allocator<int> >* _dominantColorIndex;
	vector<int, std::__1::allocator<int> >* _popupColorIndex;
	NSMutableArray* _dominantColor;
	NSMutableArray* _popupColor;
	int _startHeight;
	int _endHeight;
	int _startWidth;
	int _endWidth;
	int _photoType;
	CGRect _ROI;
	CGAffineTransform _transformFromOrientation;
	CGSize _UIImageSize;

}

@property (nonatomic,readonly) CGRect nativeImageBounds; 
@property (nonatomic,copy,readonly) NSArray * dominantColors; 
@property (nonatomic,copy,readonly) NSArray * popupColors; 
-(id)init;
-(void)dealloc;
-(void)_commonInit;
-(void)setRegionOfInterest:(CGRect)arg1 ;
-(void)buildModel:(CGImageRef)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
-(void)analyzeUIImage:(id)arg1 ;
-(void)analyzeCGImage:(CGImageRef)arg1 orientation:(long long)arg2 ;
-(void)rgb2hsv:(float)arg1 g:(float)arg2 b:(float)arg3 h:(float*)arg4 s:(float*)arg5 v:(float*)arg6 ;
-(void)mappingROI;
-(void)findDominantPopupColor:(float*)arg1 ;
-(void)findColorHSV;
-(void)findPeaks:(float*)arg1 startIndex:(int)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(long long)arg2 ;
-(CGRect)nativeImageBounds;
-(NSArray *)dominantColors;
-(NSArray *)popupColors;
@end

