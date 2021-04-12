/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSAttributedString.h>

@interface NSMutableAttributedString : NSAttributedString
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)mutableString;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)setAttributedString:(id)arg1 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)addAttributesWeakly:(id)arg1 range:(NSRange)arg2 ;
-(void)_inflectWithReplacements:(id)arg1 ;
-(Class)classForCoder;
-(void)endEditing;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)beginEditing;
@end

