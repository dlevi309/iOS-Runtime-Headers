/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithController:(id)arg1 ;
-(AKController *)controller;
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

