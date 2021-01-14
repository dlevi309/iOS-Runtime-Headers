/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/

#import <CVNLP/CVNLPInformationStream.h>

@class NSSet;

@interface CVNLPDecodingLexicons : CVNLPInformationStream {

	NSSet* _lexicons;

}

@property (nonatomic,readonly) NSSet * lexicons;              //@synthesize lexicons=_lexicons - In the implementation block
-(unsigned long long)count;
-(NSSet *)lexicons;
-(id)packagedLexiconRootCursors;
-(id)initWithLexicons:(id)arg1 decodingWeight:(id)arg2 lowerBoundLogProbability:(id)arg3 ;
-(id)initWithLexicons:(id)arg1 decodingWeight:(id)arg2 ;
-(id)initWithLexicons:(id)arg1 ;
-(id)lexiconsForPriority:(unsigned long long)arg1 ;
-(id)packagedLexiconCursorsUsingTextDecodingContext:(id)arg1 ;
@end

