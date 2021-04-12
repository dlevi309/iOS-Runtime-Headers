/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@class PKDataDetectorQueryItem, UIBezierPath, UIColor, PKRecognitionSessionManager, DDScannerResult;

@interface PKDataDetectorItem : NSObject {

	PKDataDetectorQueryItem* _dataDetectorQueryItem;
	UIBezierPath* _boundsPath;
	UIBezierPath* _baselinePath;
	double _strokeWidth;
	UIColor* _inkColor;
	PKRecognitionSessionManager* _sessionManager;
	CGRect _frame;
	CGRect _strokeBounds;

}

@property (nonatomic,retain) PKDataDetectorQueryItem * dataDetectorQueryItem;                    //@synthesize dataDetectorQueryItem=_dataDetectorQueryItem - In the implementation block
@property (nonatomic,retain) UIBezierPath * boundsPath;                                          //@synthesize boundsPath=_boundsPath - In the implementation block
@property (nonatomic,retain) UIBezierPath * baselinePath;                                        //@synthesize baselinePath=_baselinePath - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                       //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect strokeBounds;                                                //@synthesize strokeBounds=_strokeBounds - In the implementation block
@property (assign,nonatomic) double strokeWidth;                                                 //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * inkColor;                                                 //@synthesize inkColor=_inkColor - In the implementation block
@property (nonatomic,__weak,readonly) PKRecognitionSessionManager * sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) UIColor * strokeColor; 
@property (nonatomic,readonly) DDScannerResult * scannerResult; 
@property (nonatomic,readonly) DDResultRef coreResult; 
+(BOOL)canUseDataDetectorQueryItem:(id)arg1 inDrawing:(id)arg2 ;
-(UIColor *)strokeColor;
-(PKRecognitionSessionManager *)sessionManager;
-(CGRect)frame;
-(id)_strokes;
-(UIColor *)inkColor;
-(id)image;
-(void)setFrame:(CGRect)arg1 ;
-(double)strokeWidth;
-(DDResultRef)coreResult;
-(void)setInkColor:(UIColor *)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(DDScannerResult *)scannerResult;
-(UIBezierPath *)baselinePath;
-(CGRect)strokeBounds;
-(PKDataDetectorQueryItem *)dataDetectorQueryItem;
-(void)_generatePaths;
-(id)initWithDataDetectorQueryItem:(id)arg1 sessionManager:(id)arg2 ;
-(UIBezierPath *)boundsPath;
-(void)setDataDetectorQueryItem:(PKDataDetectorQueryItem *)arg1 ;
-(void)setBoundsPath:(UIBezierPath *)arg1 ;
-(void)setBaselinePath:(UIBezierPath *)arg1 ;
-(void)setStrokeBounds:(CGRect)arg1 ;
@end

