/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(oneway void)release;
-(BOOL)_tryRetain;
-(NSTextContainer *)textContainer;
-(BOOL)_isDeallocating;
-(NSLayoutManager *)layoutManager;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)processEditing;
-(id)string;
-(void)fixAttributesInRange:(NSRange)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)dealloc;
@end

