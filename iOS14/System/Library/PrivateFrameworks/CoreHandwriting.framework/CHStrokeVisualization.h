/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

