/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@class MTCallerSuppliedFields, NSDictionary, MTPromise, NSMutableDictionary, NSMutableArray;

@interface MTMetricsData : MTObject {

	MTCallerSuppliedFields* _callerSuppliedFields;
	NSDictionary* _baseFields;
	NSDictionary* _eventSpecificFields;
	MTPromise* _configBaseFields;
	NSMutableDictionary* _performanceData;
	NSMutableArray* _postProcessingBlocks;

}

@property (nonatomic,retain) MTCallerSuppliedFields * callerSuppliedFields;              //@synthesize callerSuppliedFields=_callerSuppliedFields - In the implementation block
@property (nonatomic,retain) NSDictionary * baseFields;                                  //@synthesize baseFields=_baseFields - In the implementation block
@property (nonatomic,retain) NSDictionary * eventSpecificFields;                         //@synthesize eventSpecificFields=_eventSpecificFields - In the implementation block
@property (nonatomic,retain) MTPromise * configBaseFields;                               //@synthesize configBaseFields=_configBaseFields - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * performanceData;                      //@synthesize performanceData=_performanceData - In the implementation block
@property (nonatomic,retain) NSMutableArray * postProcessingBlocks;                      //@synthesize postProcessingBlocks=_postProcessingBlocks - In the implementation block
-(id)description;
-(id)toDictionary;
-(id)recordEvent;
-(void)addPostProcessingBlock:(/*^block*/id)arg1 ;
-(void)setCallerSuppliedFields:(MTCallerSuppliedFields *)arg1 ;
-(void)setConfigBaseFields:(MTPromise *)arg1 ;
-(NSMutableDictionary *)performanceData;
-(void)setBaseFields:(NSDictionary *)arg1 ;
-(void)setEventSpecificFields:(NSDictionary *)arg1 ;
-(NSMutableArray *)postProcessingBlocks;
-(NSDictionary *)baseFields;
-(NSDictionary *)eventSpecificFields;
-(MTPromise *)configBaseFields;
-(MTCallerSuppliedFields *)callerSuppliedFields;
-(id)composeFieldsMaps;
-(void)cancelUnfinishedPromisedEventData;
-(void)setPerformanceData:(NSMutableDictionary *)arg1 ;
-(void)setPostProcessingBlocks:(NSMutableArray *)arg1 ;
@end

