/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextDropSupporting <UITextDroppable,UITextPasteConfigurationSupporting>
@property (assign,nonatomic) CGPoint contentOffsetForSameViewDrops; 
@optional
-(void)sanitizeAttributedText:(id)arg1;
-(CGPoint)contentOffsetForSameViewDrops;
-(void)setContentOffsetForSameViewDrops:(CGPoint)arg1;
-(id)_attributedStringForInsertionOfAttributedString:(id)arg1;

@required
-(BOOL)canBecomeDropResponder;
-(void)becomeDropResponder;
-(void)droppingStarted;
-(void)resignDropResponderWithDropPerformed:(BOOL)arg1;
-(void)droppingFinished;
-(BOOL)allowsEditingTextAttributes;

@end

