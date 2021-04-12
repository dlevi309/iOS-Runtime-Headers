/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSAttributedString.h>

@interface NSMutableAttributedString : NSAttributedString
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)mutableString;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)beginEditing;
-(void)endEditing;
-(Class)classForCoder;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)setAttributedString:(id)arg1 ;
-(void)addAttributesWeakly:(id)arg1 range:(NSRange)arg2 ;
@end

