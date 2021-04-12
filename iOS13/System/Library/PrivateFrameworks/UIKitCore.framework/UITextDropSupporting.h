/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextDropSupporting <UITextDroppable,UITextPasteConfigurationSupporting>
@property (assign,nonatomic) CGPoint contentOffsetForSameViewDrops; 
@optional
-(id)_attributedStringForInsertionOfAttributedString:(id)arg1;
-(void)sanitizeAttributedText:(id)arg1;
-(CGPoint)contentOffsetForSameViewDrops;
-(void)setContentOffsetForSameViewDrops:(CGPoint)arg1;

@required
-(BOOL)allowsEditingTextAttributes;
-(BOOL)canBecomeDropResponder;
-(void)becomeDropResponder;
-(void)resignDropResponderWithDropPerformed:(BOOL)arg1;
-(void)droppingStarted;
-(void)droppingFinished;

@end

