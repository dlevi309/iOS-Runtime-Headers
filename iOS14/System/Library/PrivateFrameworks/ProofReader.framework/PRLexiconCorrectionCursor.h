/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


#import <ProofReader/ProofReader-Structs.h>
@interface PRLexiconCorrectionCursor : NSObject {

	LXCursorRef _cursor;
	unsigned long long _replacementsCount;
	unsigned long long _insertionsCount;
	unsigned long long _deletionsCount;
	unsigned long long _transpositionsCount;
	unsigned long long _advancementLength;

}

@property (readonly) LXCursorRef cursor;                                  //@synthesize cursor=_cursor - In the implementation block
@property (readonly) unsigned long long replacementsCount;                //@synthesize replacementsCount=_replacementsCount - In the implementation block
@property (readonly) unsigned long long insertionsCount;                  //@synthesize insertionsCount=_insertionsCount - In the implementation block
@property (readonly) unsigned long long deletionsCount;                   //@synthesize deletionsCount=_deletionsCount - In the implementation block
@property (readonly) unsigned long long transpositionsCount;              //@synthesize transpositionsCount=_transpositionsCount - In the implementation block
@property (readonly) unsigned long long advancementLength;                //@synthesize advancementLength=_advancementLength - In the implementation block
@property (readonly) unsigned long long totalEdits; 
@property (readonly) double prefixProbability; 
@property (readonly) unsigned long long errorType; 
-(id)description;
-(LXCursorRef)cursor;
-(double)prefixProbability;
-(void)dealloc;
-(unsigned long long)errorType;
-(unsigned long long)totalEdits;
-(id)initWithCursor:(LXCursorRef)arg1 replacementsCount:(unsigned long long)arg2 insertionsCount:(unsigned long long)arg3 deletionsCount:(unsigned long long)arg4 transpositionsCount:(unsigned long long)arg5 advancementLength:(unsigned long long)arg6 ;
-(unsigned long long)replacementsCount;
-(unsigned long long)insertionsCount;
-(unsigned long long)deletionsCount;
-(unsigned long long)transpositionsCount;
-(unsigned long long)advancementLength;
@end

