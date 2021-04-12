/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTMediaPlaylist.h>

@class NSArray, NSMutableArray, NSString;

@interface MTHLSVideoPlaylist : NSObject <MTMediaPlaylist> {

	unsigned long long _startPosition;
	NSMutableArray* _rollItems;
	NSArray* _mainFeatureMetricsData;

}

@property (assign,nonatomic) unsigned long long startPosition;              //@synthesize startPosition=_startPosition - In the implementation block
@property (nonatomic,retain) NSMutableArray * rollItems;                    //@synthesize rollItems=_rollItems - In the implementation block
@property (nonatomic,retain) NSArray * mainFeatureMetricsData;              //@synthesize mainFeatureMetricsData=_mainFeatureMetricsData - In the implementation block
@property (nonatomic,readonly) NSArray * eventData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)startPosition;
-(void)setStartPosition:(unsigned long long)arg1 ;
-(id)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2 ;
-(id)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2 ;
-(void)addItemStartAtMilliseconds:(unsigned long long)arg1 endAtMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(void)addItemStartAtMilliseconds:(unsigned long long)arg1 durationMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(void)addItemStartAtSeconds:(double)arg1 durationSeconds:(double)arg2 metricsData:(id)arg3 ;
-(void)setMainFeatureMetricsData:(NSArray *)arg1 ;
-(id)initWithStartPosition:(unsigned long long)arg1 mainFeatureMetricsData:(id)arg2 ;
-(void)addRollInfoItem:(id)arg1 ;
-(void)addRollItem:(id)arg1 ;
-(long long)indexOfLastRollItemWithStartBeforePosition:(unsigned long long)arg1 ;
-(id)mainFeatureItemWithStartOverallPosition:(unsigned long long)arg1 ;
-(NSMutableArray *)rollItems;
-(NSArray *)mainFeatureMetricsData;
-(id)initWithMainFeatureMetricsData:(id)arg1 ;
-(void)addRollInfoItems:(id)arg1 ;
-(void)addRollItemWithStartOverallPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(void)setRollItems:(NSMutableArray *)arg1 ;
@end

