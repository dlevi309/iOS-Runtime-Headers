/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHQuery.h>

@class DDScannerServiceConfiguration, NSArray;

@interface CHDataDetectorQuery : CHQuery {

	DDScannerServiceConfiguration* _dataDetectorConfiguration;
	NSArray* _foundItems;

}

@property (setter=_setFoundItems:,nonatomic,copy) NSArray * foundItems;              //@synthesize foundItems=_foundItems - In the implementation block
-(void)stop;
-(NSArray *)foundItems;
-(id)debugName;
-(void)dealloc;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)q_updateQueryResult;
-(void)_setFoundItems:(id)arg1 ;
-(id)_dataDetectorResultsForSessionResult:(id)arg1 ;
-(void)_enumerateDetectedRangesForContextualTextResults:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

