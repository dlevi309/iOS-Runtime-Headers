/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSWPLayout.h>

@class NSMutableSet;

@interface SXTextTangierTextLayout : TSWPLayout {

	NSMutableSet* _addedChildren;

}

@property (nonatomic,retain) NSMutableSet * addedChildren;              //@synthesize addedChildren=_addedChildren - In the implementation block
-(void)invalidate;
-(void)validate;
-(CGSize)maxSize;
-(void)invalidateTextLayout;
-(double)baselineForLastLine;
-(id)attachedLayoutsInLayout:(id)arg1 anchored:(BOOL)arg2 ;
-(id)validatedLayoutForAttachedDrawable:(id)arg1 ;
-(NSMutableSet *)addedChildren;
-(void)setAddedChildren:(NSMutableSet *)arg1 ;
-(void)addAttachmentLayout:(id)arg1 ;
-(double)lineHeightGuessForFirstLine;
-(BOOL)shouldPositionAttachmentsIteratively;
-(unsigned long long)iterativeAttachmentPositioningMaxPassCount;
-(CFLocaleRef)hyphenationLocale;
-(id)currentInlineDrawableLayouts;
-(id)currentAnchoredDrawableLayouts;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1 ;
-(id)layoutForInlineDrawable:(id)arg1 ;
-(BOOL)alwaysAllowWordSplit;
-(BOOL)pushAscendersIntoColumn;
-(void)startedIterativePositioningProcessForDrawableAttachment:(id)arg1 ;
-(void)drawableAttachment:(id)arg1 willStartNewIterationWithIndex:(unsigned long long)arg2 ;
-(void)drawableAttachment:(id)arg1 didFinalizePosition:(CGPoint)arg2 ;
-(BOOL)drawableAttachment:(id)arg1 withLayout:(id)arg2 shouldPositionIterativelyInColumn:(id)arg3 ;
@end

