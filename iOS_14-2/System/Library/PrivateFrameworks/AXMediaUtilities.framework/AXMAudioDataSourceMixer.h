/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)dataSources;
-(void)addDataSource:(id)arg1 ;
-(void)removeDataSource:(id)arg1 ;
-(void)setDataSources:(NSSet *)arg1 ;
-(NSString *)name;
-(id)description;
-(double)panning;
-(id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(BOOL)arg3 ;
-(void)setCurrentSampleIndex:(unsigned long long)arg1 ;
-(BOOL)isMonoOutput;
-(void)removeAllDataSources;
-(void)prepareNextSamples:(unsigned long long)arg1 ;
-(void)setPanning:(double)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

