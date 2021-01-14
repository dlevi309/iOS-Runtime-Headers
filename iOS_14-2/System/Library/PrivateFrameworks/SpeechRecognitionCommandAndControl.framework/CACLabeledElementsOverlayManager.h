/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>

@protocol CACLabeledElementsOverlayManagerDelegate;
@class NSMutableArray, NSArray;

@interface CACLabeledElementsOverlayManager : CACSimpleContentViewManager {

	NSMutableArray* _labeledElements;
	id<CACLabeledElementsOverlayManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CACLabeledElementsOverlayManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * labeledElements;                                               //@synthesize labeledElements=_labeledElements - In the implementation block
+(void)assignNumbersToLabeledElements:(id)arg1 numberingStrategy:(int)arg2 ;
-(id<CACLabeledElementsOverlayManagerDelegate>)delegate;
-(void)setDelegate:(id<CACLabeledElementsOverlayManagerDelegate>)arg1 ;
-(BOOL)isOverlay;
-(void)hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)startDelayedDimmingOfNumbers;
-(void)stopDelayedDimmingOfNumbers;
-(NSArray *)labeledElements;
-(void)clearLabeledElements;
-(void)showLabeledElementsOverlayWithLabeledElements:(id)arg1 forceNoArrow:(BOOL)arg2 ;
-(void)addLabeledElements:(id)arg1 forceNoArrow:(BOOL)arg2 ;
-(id)_optimizeLabeledElements:(id)arg1 startingNumberedLabelsAtIndex:(unsigned long long)arg2 forceNoArrow:(BOOL)arg3 ;
-(id)_findLabeledElementsThatIntersectsLabelRect:(CGRect)arg1 fromLabeledElement:(id)arg2 justLabelRect:(BOOL)arg3 additionalElements:(id)arg4 ;
-(void)showLabeledElementsOverlayWithLabeledElements:(id)arg1 ;
@end

