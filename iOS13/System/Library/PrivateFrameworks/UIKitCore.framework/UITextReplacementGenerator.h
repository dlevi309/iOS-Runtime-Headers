/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITextRange, NSString;

@interface UITextReplacementGenerator : NSObject {

	UITextRange* _replacementRange;
	NSString* _stringToReplace;

}

@property (nonatomic,retain) UITextRange * replacementRange;              //@synthesize replacementRange=_replacementRange - In the implementation block
@property (nonatomic,copy) NSString * stringToReplace;                    //@synthesize stringToReplace=_stringToReplace - In the implementation block
-(id)replacements;
-(void)setReplacementRange:(UITextRange *)arg1 ;
-(UITextRange *)replacementRange;
-(void)setStringToReplace:(NSString *)arg1 ;
-(NSString *)stringToReplace;
-(BOOL)shouldAllowString:(id)arg1 intoReplacements:(id)arg2 ;
-(id)replacementWithText:(id)arg1 ;
-(void)addPlaceholderForEmptyReplacements:(id)arg1 ;
-(BOOL)isStringToReplaceMisspelled;
@end

