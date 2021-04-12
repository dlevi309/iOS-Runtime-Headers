/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


@class NLDataProvider, NLNumberGenerator, NSMutableData;

@interface NLDataEnumerator : NSObject {

	NLDataProvider* _dataProvider;
	unsigned long long _idx;
	NLNumberGenerator* _generator;
	NSMutableData* _shuffleData;

}

@property (retain,readonly) NLDataProvider * dataProvider; 
@property (readonly) unsigned long long index; 
-(unsigned long long)index;
-(id)initWithDataProvider:(id)arg1 ;
-(void)shuffle;
-(void)rewind;
-(NLDataProvider *)dataProvider;
-(id)nextInstance;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(id)initWithDataProvider:(id)arg1 numberGenerator:(id)arg2 ;
-(void)rewindAndShuffle:(BOOL)arg1 ;
@end

