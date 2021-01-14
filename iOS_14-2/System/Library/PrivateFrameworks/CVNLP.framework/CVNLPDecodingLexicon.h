/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


#import <CVNLP/CVNLP-Structs.h>
@interface CVNLPDecodingLexicon : NSObject {

	const LXLexiconRef _lexicon;
	unsigned long long _priority;
	LXCursorRef __rootCursor;

}

@property (nonatomic,readonly) LXCursorRef _rootCursor;                  //@synthesize _rootCursor=__rootCursor - In the implementation block
@property (nonatomic,readonly) const LXLexiconRef lexicon;               //@synthesize lexicon=_lexicon - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
+(const LXLexiconRef)_createLexiconForLocale:(id)arg1 ;
+(id)decodingLexiconForLocale:(id)arg1 ;
+(id)decodingLexiconForLocale:(id)arg1 priority:(unsigned long long)arg2 ;
-(id)initWithLexicon:(LXLexiconRef)arg1 ;
-(const LXLexiconRef)lexicon;
-(unsigned long long)priority;
-(void)dealloc;
-(id)packagedLexiconCursorUsingTextDecodingContext:(id)arg1 ;
-(id)initWithLexicon:(LXLexiconRef)arg1 priority:(unsigned long long)arg2 ;
-(id)packagedLexiconRootCursor;
-(LXCursorRef)_rootCursor;
@end

