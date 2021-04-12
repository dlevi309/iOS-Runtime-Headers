/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol UITextLinkInteraction
@optional
-(BOOL)interactionDidStartWithLinkAtPoint:(CGPoint)arg1;
-(void)_requestTextItemConstrainedToLineAtPoint:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2;

@required
-(void)cancelInteractionWithLink;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1;
-(BOOL)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1;

@end

