/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@class NSString, NSArray;

@interface MCSyntheticInput : MCKeyboardInput {

	BOOL _includeSuffixAsSearchString;
	NSString* _committedText;
	NSArray* _syllables;
	unsigned long long _cursorIndex;

}

@property (nonatomic,readonly) NSString * committedText;                    //@synthesize committedText=_committedText - In the implementation block
@property (nonatomic,readonly) NSString * uncommittedText; 
@property (nonatomic,readonly) NSArray * syllables;                         //@synthesize syllables=_syllables - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) unsigned long long cursorIndex;              //@synthesize cursorIndex=_cursorIndex - In the implementation block
@property (assign,nonatomic) BOOL includeSuffixAsSearchString;              //@synthesize includeSuffixAsSearchString=_includeSuffixAsSearchString - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(NSString *)committedText;
-(NSString *)uncommittedText;
-(NSArray *)syllables;
-(id)initWithCommittedText:(id)arg1 syllables:(id)arg2 ;
-(id)syntheticInputWithCommittedText:(id)arg1 syllables:(id)arg2 ;
-(id)syntheticInputWithCursorIndex:(unsigned long long)arg1 ;
-(int)syllableIndex:(int*)arg1 ;
-(id)externalSuffix;
-(unsigned long long)cursorIndex;
-(BOOL)includeSuffixAsSearchString;
-(void)setIncludeSuffixAsSearchString:(BOOL)arg1 ;
@end

