/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)committedText;
-(NSString *)uncommittedText;
-(NSString *)text;
-(NSArray *)syllables;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCommittedText:(id)arg1 syllables:(id)arg2 ;
-(id)syntheticInputWithCommittedText:(id)arg1 syllables:(id)arg2 ;
-(id)syntheticInputWithCursorIndex:(unsigned long long)arg1 ;
-(int)syllableIndex:(int*)arg1 ;
-(id)externalSuffix;
-(unsigned long long)cursorIndex;
-(BOOL)includeSuffixAsSearchString;
-(void)setIncludeSuffixAsSearchString:(BOOL)arg1 ;
@end

