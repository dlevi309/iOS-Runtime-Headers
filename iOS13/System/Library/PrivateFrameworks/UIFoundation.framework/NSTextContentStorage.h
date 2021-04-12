/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextContentManager.h>
#import <libobjc.A.dylib/NSTextStorageController.h>

@class NSTextStorage, NSAttributedString, NSCountableTextRange, NSRunStorage, NSStorage, NSString;

@interface NSTextContentStorage : NSTextContentManager <NSTextStorageController> {

	NSAttributedString* _attributedString;
	NSTextStorage* _textStorage;
	NSCountableTextRange* _documentRange;
	NSRunStorage* _indexTable;
	NSStorage* _elements;
	NSRange _cachedRange;
	NSRange _modifiedRange;
	long long _modifiedDocumentLengthDelta;
	SCD_Struct_NS38* _activeEnumerationCache;

}

@property (readonly) NSCountableTextRange * documentRange; 
@property (copy) NSAttributedString * attributedString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSTextStorage * textStorage; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSCountableTextRange *)documentRange;
-(NSAttributedString *)attributedString;
-(NSTextStorage *)textStorage;
-(id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2 ;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
-(void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(NSRange)arg5 ;
-(BOOL)synchronizeToBackingStore:(/*^block*/id)arg1 ;
-(void)_commonInitialization;
-(void)updateRangesForTextElement:(id)arg1 locationDelta:(long long)arg2 ;
-(void)beginEditingTransaction;
-(void)endEditingTransaction;
-(id)attributedStringForTextElement:(id)arg1 ;
-(id)textElementForAttributedString:(id)arg1 ;
-(id)attributedStringForTextElements:(id)arg1 ;
-(id)textElementsForAttributedString:(id)arg1 ;
@end

