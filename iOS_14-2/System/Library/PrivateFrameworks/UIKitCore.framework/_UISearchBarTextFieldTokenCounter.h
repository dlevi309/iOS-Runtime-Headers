/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSTextStorage, NSMutableIndexSet, NSIndexSet;

@interface _UISearchBarTextFieldTokenCounter : NSObject {

	id _textStorageObservation;
	NSTextStorage* _textStorage;
	NSMutableIndexSet* _tokenCharacterIndexes;

}

@property (nonatomic,readonly) NSIndexSet * tokenCharacterIndexes; 
@property (nonatomic,readonly) NSRange characterRangeOfAllTokens; 
-(NSRange)characterRangeForSubrangeOfTextAfterLastToken:(NSRange)arg1 ;
-(id)tokenAtCharacterIndex:(unsigned long long)arg1 ;
-(NSRange)subrangeOfTextAfterLastTokenForCharacterRange:(NSRange)arg1 ;
-(unsigned long long)characterIndexForInsertingTokenAtIndex:(unsigned long long)arg1 ;
-(NSIndexSet *)tokenCharacterIndexes;
-(unsigned long long)characterIndexForSelectingOrRemovingTokenAtIndex:(unsigned long long)arg1 ;
-(NSRange)characterRangeOfAllTokens;
-(NSRange)characterRangeOfTextAfterLastToken;
-(id)initWithTextStorage:(id)arg1 ;
-(void)_handleProcessEditing;
-(unsigned long long)indexOfTokenAtCharacterIndex:(unsigned long long)arg1 ;
-(void)_addCharacterIndexesOfTokensInRange:(NSRange)arg1 toIndexSet:(id)arg2 ;
@end

