/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextStorage.h>

@class NSAttributedString, NSLayoutManager, NSTextContainer;

@interface __NSImmutableTextStorage : NSTextStorage {

	NSAttributedString* _contents;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;

}

@property (readonly) NSLayoutManager * layoutManager; 
@property (readonly) NSTextContainer * textContainer; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)string;
-(void)dealloc;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(NSLayoutManager *)layoutManager;
-(NSTextContainer *)textContainer;
-(void)fixAttributesInRange:(NSRange)arg1 ;
-(void)processEditing;
@end

