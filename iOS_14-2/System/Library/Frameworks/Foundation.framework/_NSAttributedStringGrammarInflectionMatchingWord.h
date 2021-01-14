/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/_NSAttributedStringGrammarInflecting.h>

@class NSString, _NSAttributedStringGrammar;

@interface _NSAttributedStringGrammarInflectionMatchingWord : NSObject <NSCopying, _NSAttributedStringGrammarInflecting> {

	NSString* _wordToken;
	_NSAttributedStringGrammar* _matchingGrammar;

}

@property (readonly) NSString * wordToken;                                      //@synthesize wordToken=_wordToken - In the implementation block
@property (readonly) _NSAttributedStringGrammar * matchingGrammar;              //@synthesize matchingGrammar=_matchingGrammar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)wordToken;
-(id)initWithWordToken:(id)arg1 matchingGrammar:(id)arg2 ;
-(_NSAttributedStringGrammar *)matchingGrammar;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

