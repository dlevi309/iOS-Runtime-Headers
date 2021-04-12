/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)storage;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)siblings;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(CGRect)accessibilityFrameForScrolling;
-(BOOL)accessibilitySupportsTextSelection;
-(id)accessibilityPreviousTextNavigationElement;
-(id)accessibilityNextTextNavigationElement;
-(SXTextTangierInteractiveCanvasController *)icc;
-(id)interactiveCanvasController;
-(id)supportedCustomRotors;
-(id)itemsForCustomRotor:(id)arg1 ;
-(SXAXCustomRotor *)headingsRotor;
-(id)sxaxSupportedEditRotorActions;
-(id)sxaxNameForEditRotorAction:(id)arg1 ;
-(id)hitRep:(CGPoint)arg1 withGesture:(id)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)setFrameInCanvas:(CGRect)arg1 ;
-(BOOL)updateFromVisualPosition;
-(Class)wpEditorClass;
-(BOOL)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(BOOL)arg3 ;
-(unsigned long long)charIndexForPointWithPinning:(CGPoint)arg1 isTail:(BOOL)arg2 selectionType:(int)arg3 ;
-(id)orderedSiblings;
-(CGRect)frameInCanvas;
-(id<SXTextTangierRepAccessibilityDataSource>)accessibilityDataSource;
-(SXAXCustomRotor *)linkRotor;
-(void)setAccessibilityDataSource:(id<SXTextTangierRepAccessibilityDataSource>)arg1 ;
-(BOOL)forceTiling;
-(BOOL)preventClipToColumn;
-(id)repForCharIndex:(unsigned long long)arg1 isStart:(BOOL)arg2 ;
-(void)setLinkRotor:(SXAXCustomRotor *)arg1 ;
-(void)setHeadingsRotor:(SXAXCustomRotor *)arg1 ;
-(void)setIcc:(SXTextTangierInteractiveCanvasController *)arg1 ;
@end

