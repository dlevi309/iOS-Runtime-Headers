/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHPostprocessingStep.h>

@interface CHTransliterateChineseStep : CHPostprocessingStep {

	void* _icuTransliterator;

}

@property (assign,nonatomic) void* icuTransliterator;              //@synthesize icuTransliterator=_icuTransliterator - In the implementation block
-(id)init;
-(id)process:(id)arg1 ;
-(void)dealloc;
-(void*)icuTransliterator;
-(void)setIcuTransliterator:(void*)arg1 ;
@end

