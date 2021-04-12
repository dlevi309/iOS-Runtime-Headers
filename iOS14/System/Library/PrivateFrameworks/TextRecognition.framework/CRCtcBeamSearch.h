/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSLocale;

@interface CRCtcBeamSearch : NSObject {

	LXLexiconRef _dynamicLexicon;
	NSLocale* _locale;

}

@property (assign,nonatomic) LXLexiconRef dynamicLexicon;              //@synthesize dynamicLexicon=_dynamicLexicon - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                      //@synthesize locale=_locale - In the implementation block
-(NSLocale *)locale;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(LXLexiconRef)dynamicLexicon;
-(void)setDynamicLexicon:(LXLexiconRef)arg1 ;
-(id)kBestPathsForInput:(id)arg1 k:(unsigned long long)arg2 beamWidth:(unsigned long long)arg3 outputProbs:(id*)arg4 outputWhitespaceRanges:(id*)arg5 error:(id*)arg6 ;
@end

