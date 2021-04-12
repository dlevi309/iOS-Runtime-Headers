/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


@class NSString;

@interface NLLexiconEntry : NSObject {

	NSString* _string;
	unsigned _tokenID;
	unsigned long long _flags;
	double _probability;

}

@property (copy,readonly) NSString * string; 
@property (readonly) unsigned long long flags; 
@property (readonly) double probability; 
+(id)entryWithString:(id)arg1 tokenID:(unsigned)arg2 flags:(unsigned long long)arg3 probability:(double)arg4 ;
-(unsigned)tokenID;
-(double)probability;
-(unsigned long long)flags;
-(NSString *)string;
-(id)initWithString:(id)arg1 tokenID:(unsigned)arg2 flags:(unsigned long long)arg3 probability:(double)arg4 ;
@end

