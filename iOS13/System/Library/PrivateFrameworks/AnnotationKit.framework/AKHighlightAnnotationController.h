/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKController, AKHighlightAnnotation;

@interface AKHighlightAnnotationController : NSObject {

	AKController* _controller;
	AKHighlightAnnotation* _continuousHighlight;

}

@property (__weak) AKController * controller;                                //@synthesize controller=_controller - In the implementation block
@property (retain) AKHighlightAnnotation * continuousHighlight;              //@synthesize continuousHighlight=_continuousHighlight - In the implementation block
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)continueHighlighting;
-(void)beginContinuousHighlighting;
-(void)endContinuousHighlighting;
-(id)_createHighlightAnnotationWithAttributeTag:(long long)arg1 ;
-(BOOL)_adaptExistingHighlightsToNewHighlight:(id)arg1 onPageController:(id)arg2 firstModifiedHighlight:(id*)arg3 ;
-(BOOL)_clearHighlightsWithStyleMatchingMask:(unsigned long long)arg1 except:(id)arg2 inRange:(NSRange)arg3 onPageController:(id)arg4 ;
-(id)_highlightsInCharacterIndexRange:(NSRange)arg1 onPageController:(id)arg2 ;
-(void)setContinuousHighlight:(AKHighlightAnnotation *)arg1 ;
-(AKHighlightAnnotation *)continuousHighlight;
-(void)performOneShotHighlightWithAttributeTag:(long long)arg1 ;
-(void)clearHighlightsWithinSelection;
-(id)highlightsWithinSelection;
@end

