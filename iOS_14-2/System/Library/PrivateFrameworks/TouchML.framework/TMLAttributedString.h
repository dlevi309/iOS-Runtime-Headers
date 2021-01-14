/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TMLAttributedStringJSExports.h>

@class NSString, NSMutableAttributedString, NSAttributedString;

@interface TMLAttributedString : NSObject <NSCopying, TMLAttributedStringJSExports> {

	NSMutableAttributedString* _attributedString;

}

@property (nonatomic,copy) NSString * string; 
@property (nonatomic,copy) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
+(void)initializeJSContext:(id)arg1 ;
+(id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(id)init;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(CGSize)size;
-(NSAttributedString *)attributedString;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(NSString *)string;
-(id)attributedStringWithAttachment:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)NSAttributedString;
-(id)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 ;
@end

