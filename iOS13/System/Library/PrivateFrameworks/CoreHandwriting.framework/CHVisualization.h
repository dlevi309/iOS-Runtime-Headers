/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@protocol CHVisualizationDelegate;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHRecognitionSession;

@interface CHVisualization : NSObject {

	CHRecognitionSession* _recognitionSession;
	id<CHVisualizationDelegate> _delegate;

}

@property (nonatomic,readonly) long long layeringPriority; 
@property (nonatomic,readonly) BOOL wantsInputDrawings; 
@property (nonatomic,retain,readonly) CHRecognitionSession * recognitionSession;              //@synthesize recognitionSession=_recognitionSession - In the implementation block
@property (assign,nonatomic) id<CHVisualizationDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CHVisualizationDelegate>)delegate;
-(void)setDelegate:(id<CHVisualizationDelegate>)arg1 ;
-(CHRecognitionSession *)recognitionSession;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(long long)layeringPriority;
-(BOOL)wantsInputDrawings;
-(void)recognitionSessionDidUpdateRecognitionResult;
-(void)toggleVisualizationRegionAtPoint:(CGPoint)arg1 ;
@end

