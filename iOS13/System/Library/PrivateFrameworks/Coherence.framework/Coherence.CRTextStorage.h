/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
*/

#import <Coherence/Coherence-Structs.h>
#import <UIFoundation/NSTextStorage.h>

@class NSString;

@interface Coherence.CRTextStorage : NSTextStorage {

	 crString;
	 stringAttributes;

}

@property (readonly,nonatomic) NSString * string; 
-(id)init;
-(NSString *)string;
-(id)attributesAtIndex:(long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
@end

