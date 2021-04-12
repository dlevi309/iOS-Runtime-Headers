/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextReplacementGenerator.h>

@class NSTextAlternatives;

@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator {

	NSTextAlternatives* _alternatives;

}

@property (nonatomic,readonly) NSTextAlternatives * alternatives;              //@synthesize alternatives=_alternatives - In the implementation block
-(id)replacements;
-(NSTextAlternatives *)alternatives;
-(id)initWithAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3 ;
@end

