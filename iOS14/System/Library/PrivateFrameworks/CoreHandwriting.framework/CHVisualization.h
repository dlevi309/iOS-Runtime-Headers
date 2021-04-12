/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<CHVisualizationDelegate>)delegate;
-(void)setDelegate:(id<CHVisualizationDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithRecognitionSession:(id)arg1 ;
-(CHRecognitionSession *)recognitionSession;
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(long long)layeringPriority;
-(BOOL)wantsInputDrawings;
-(void)recognitionSessionDidUpdateRecognitionResult;
-(void)toggleVisualizationRegionAtPoint:(CGPoint)arg1 ;
@end

