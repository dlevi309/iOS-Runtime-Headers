/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITextRange, NSString;

@interface UITextReplacementGenerator : NSObject {

	UITextRange* _replacementRange;
	NSString* _stringToReplace;

}

@property (nonatomic,retain) UITextRange * replacementRange;              //@synthesize replacementRange=_replacementRange - In the implementation block
@property (nonatomic,copy) NSString * stringToReplace;                    //@synthesize stringToReplace=_stringToReplace - In the implementation block
-(id)replacementWithText:(id)arg1 ;
-(BOOL)shouldAllowString:(id)arg1 intoReplacements:(id)arg2 ;
-(void)addPlaceholderForEmptyReplacements:(id)arg1 ;
-(id)replacements;
-(void)setReplacementRange:(UITextRange *)arg1 ;
-(UITextRange *)replacementRange;
-(void)setStringToReplace:(NSString *)arg1 ;
-(NSString *)stringToReplace;
-(BOOL)isStringToReplaceMisspelled;
@end

