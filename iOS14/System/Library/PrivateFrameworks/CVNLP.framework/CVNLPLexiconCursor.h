/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/

#import <CVNLP/CVNLP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CVNLPLexiconCursor : NSObject <NSCopying> {

	const LXCursorRef _cursor;
	unsigned long long _priority;

}

@property (nonatomic,readonly) const LXCursorRef cursor;                 //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
-(const LXCursorRef)cursor;
-(unsigned long long)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initByAdvancingCursor:(id)arg1 withString:(id)arg2 ;
-(id)initWithCursor:(LXCursorRef)arg1 priority:(unsigned long long)arg2 ;
-(id)newCursorByAdvancingWithString:(id)arg1 ;
-(double)cursorConditionalLogProbability;
@end

