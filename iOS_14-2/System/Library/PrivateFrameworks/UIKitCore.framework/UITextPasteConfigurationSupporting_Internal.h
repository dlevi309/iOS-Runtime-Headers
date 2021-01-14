/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addInvisibleRange:(id)arg1;
-(void)removeInvisibleRange:(id)arg1;
-(id)_implicitPasteConfigurationClasses;
-(void)layoutIfNeeded;
-(id)_inputController;
-(id)_attributedStringForInsertionOfAttributedString:(id)arg1;
-(BOOL)allowsEditingTextAttributes;

@end

