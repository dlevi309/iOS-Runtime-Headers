/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSWPRep.h>
#import <libobjc.A.dylib/SXAXCustomRotorItemProvider.h>
#import <libobjc.A.dylib/SXTextTangierRepAccessibilityElement.h>

@protocol SXTextTangierRepAccessibilityDataSource;
@class SXAXCustomRotor, SXTextTangierInteractiveCanvasController, NSString;

@interface SXTextTangierFlowRep : TSWPRep <SXAXCustomRotorItemProvider, SXTextTangierRepAccessibilityElement> {

	id<SXTextTangierRepAccessibilityDataSource> accessibilityDataSource;
	SXAXCustomRotor* _linkRotor;
	SXAXCustomRotor* _headingsRotor;
	SXTextTangierInteractiveCanvasController* _icc;
	CGRect _frameInCanvas;

}

@property (nonatomic,retain) SXAXCustomRotor * linkRotor;                                                             //@synthesize linkRotor=_linkRotor - In the implementation block
@property (nonatomic,retain) SXAXCustomRotor * headingsRotor;                                                         //@synthesize headingsRotor=_headingsRotor - In the implementation block
@property (assign,nonatomic,__weak) SXTextTangierInteractiveCanvasController * icc;                                   //@synthesize icc=_icc - In the implementation block
@property (assign,nonatomic) CGRect frameInCanvas;                                                                    //@synthesize frameInCanvas=_frameInCanvas - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXTextTangierRepAccessibilityDataSource> accessibilityDataSource; 
-(id)siblings;
-(BOOL)isAccessibilityElement;
-(id)storage;
-(SXTextTangierInteractiveCanvasController *)icc;
-(id)accessibilityElements;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)_accessibilityUserTestingChildren;
-(unsigned long long)accessibilityTraits;
-(CGRect)accessibilityFrameForScrolling;
-(void)setIcc:(SXTextTangierInteractiveCanvasController *)arg1 ;
-(BOOL)accessibilitySupportsTextSelection;
-(id)accessibilityPreviousTextNavigationElement;
-(id)accessibilityNextTextNavigationElement;
-(id)hitRep:(CGPoint)arg1 withGesture:(id)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)interactiveCanvasController;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(void)dealloc;
-(id)supportedCustomRotors;
-(id)itemsForCustomRotor:(id)arg1 ;
-(id)sxaxSupportedEditRotorActions;
-(id)sxaxNameForEditRotorAction:(id)arg1 ;
-(void)setFrameInCanvas:(CGRect)arg1 ;
-(BOOL)updateFromVisualPosition;
-(Class)wpEditorClass;
-(BOOL)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(BOOL)arg3 ;
-(unsigned long long)charIndexForPointWithPinning:(CGPoint)arg1 isTail:(BOOL)arg2 selectionType:(int)arg3 ;
-(id)orderedSiblings;
-(CGRect)frameInCanvas;
-(id<SXTextTangierRepAccessibilityDataSource>)accessibilityDataSource;
-(SXAXCustomRotor *)linkRotor;
-(SXAXCustomRotor *)headingsRotor;
-(id)sxaxLinkElements;
-(void)setAccessibilityDataSource:(id<SXTextTangierRepAccessibilityDataSource>)arg1 ;
-(BOOL)forceTiling;
-(BOOL)preventClipToColumn;
-(id)repForCharIndex:(unsigned long long)arg1 isStart:(BOOL)arg2 ;
-(void)setLinkRotor:(SXAXCustomRotor *)arg1 ;
-(void)setHeadingsRotor:(SXAXCustomRotor *)arg1 ;
@end

