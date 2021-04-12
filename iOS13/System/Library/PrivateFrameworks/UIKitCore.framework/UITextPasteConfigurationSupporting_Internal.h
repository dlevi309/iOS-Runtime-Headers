/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextPasteConfigurationSupporting_Internal <UITextPasteConfigurationSupporting,UITextInput>
@property (assign,nonatomic) BOOL usesStandardTextScaling; 
@optional
+(Class)_textPasteItemClass;
-(void)_pasteSessionDidFinish:(id)arg1;
-(BOOL)usesStandardTextScaling;
-(void)setUsesStandardTextScaling:(BOOL)arg1;

@required
-(void)layoutIfNeeded;
-(id)_inputController;
-(BOOL)allowsEditingTextAttributes;
-(id)_attributedStringForInsertionOfAttributedString:(id)arg1;
-(void)addInvisibleRange:(id)arg1;
-(void)removeInvisibleRange:(id)arg1;
-(id)_implicitPasteConfigurationClasses;

@end

