/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMAudioDataSource.h>

@class NSString, NSSet;

@interface AXMAudioDataSourceMixer : AXMAudioDataSource {

	NSString* _name;
	double _panning;
	NSSet* _dataSources;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double panning;                   //@synthesize panning=_panning - In the implementation block
@property (nonatomic,retain) NSSet * dataSources;              //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,readonly) BOOL isMonoOutput; 
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSSet *)dataSources;
-(id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(BOOL)arg3 ;
-(void)setCurrentSampleIndex:(unsigned long long)arg1 ;
-(BOOL)isMonoOutput;
-(double)panning;
-(void)addDataSource:(id)arg1 ;
-(void)removeDataSource:(id)arg1 ;
-(void)removeAllDataSources;
-(void)prepareNextSamples:(unsigned long long)arg1 ;
-(void)setPanning:(double)arg1 ;
-(void)setDataSources:(NSSet *)arg1 ;
@end

