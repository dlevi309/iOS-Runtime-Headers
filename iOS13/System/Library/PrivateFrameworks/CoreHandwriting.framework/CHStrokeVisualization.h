/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHVisualization.h>

@protocol CHStrokeProvider;
@interface CHStrokeVisualization : CHVisualization {

	id<CHStrokeProvider> __strokeProviderDrawn;

}

@property (nonatomic,retain) id<CHStrokeProvider> _strokeProviderDrawn;              //@synthesize _strokeProviderDrawn=__strokeProviderDrawn - In the implementation block
-(void)dealloc;
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(void)recognitionSessionDidUpdateRecognitionResult;
-(void)drawStrokesFromStrokeProvider:(id)arg1 inRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(id<CHStrokeProvider>)_strokeProviderDrawn;
-(void)set_strokeProviderDrawn:(id<CHStrokeProvider>)arg1 ;
@end

