/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)shuffle;
-(NLDataProvider *)dataProvider;
-(id)initWithDataProvider:(id)arg1 ;
-(void)rewind;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(id)nextInstance;
-(id)initWithDataProvider:(id)arg1 numberGenerator:(id)arg2 ;
-(void)rewindAndShuffle:(BOOL)arg1 ;
@end

