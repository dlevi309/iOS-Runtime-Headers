/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@protocol BMMiningTaskDelegate;
@class NSMutableDictionary, NSDate, NSURL, NSSet;

@interface BMMiningTask : NSObject {

	id<BMMiningTaskDelegate> _delegate;
	long long _completionStatus;
	NSMutableDictionary* _coreAnalyticsDict;
	unsigned long long _rulePersistBatchSize;
	NSDate* _start;
	NSURL* _storageURL;
	NSSet* _types;
	NSSet* _targetTypes;
	double _samplingInterval;
	unsigned long long _absoluteSupport;
	double _confidence;

}

@property (nonatomic,copy) NSDate * start;                                           //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) long long completionStatus;                             //@synthesize completionStatus=_completionStatus - In the implementation block
@property (nonatomic,copy,readonly) NSURL * storageURL;                              //@synthesize storageURL=_storageURL - In the implementation block
@property (nonatomic,copy,readonly) NSSet * types;                                   //@synthesize types=_types - In the implementation block
@property (nonatomic,copy,readonly) NSSet * targetTypes;                             //@synthesize targetTypes=_targetTypes - In the implementation block
@property (nonatomic,readonly) double samplingInterval;                              //@synthesize samplingInterval=_samplingInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long absoluteSupport;                   //@synthesize absoluteSupport=_absoluteSupport - In the implementation block
@property (nonatomic,readonly) double confidence;                                    //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic,__weak) id<BMMiningTaskDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,retain) NSMutableDictionary * coreAnalyticsDict;                //@synthesize coreAnalyticsDict=_coreAnalyticsDict - In the implementation block
@property (nonatomic,readonly) unsigned long long rulePersistBatchSize;              //@synthesize rulePersistBatchSize=_rulePersistBatchSize - In the implementation block
+(id)supergreenMiningTask;
-(id)init;
-(id<BMMiningTaskDelegate>)delegate;
-(void)setDelegate:(id<BMMiningTaskDelegate>)arg1 ;
-(NSDate *)start;
-(BOOL)isFinished;
-(double)confidence;
-(double)samplingInterval;
-(void)finishWithError:(id)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
-(NSSet *)types;
-(NSURL *)storageURL;
-(long long)completionStatus;
-(void)setCompletionStatus:(long long)arg1 ;
-(id)initWithStorageURL:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(unsigned long long)arg5 confidence:(double)arg6 rulePersistBatchSize:(unsigned long long)arg7 ;
-(id)initWithStorageURL:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(unsigned long long)arg5 confidence:(double)arg6 ;
-(void)finishWithCompletionStatus:(long long)arg1 ;
-(void)setCoreAnalyticsDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)coreAnalyticsDict;
-(unsigned long long)absoluteSupport;
-(NSSet *)targetTypes;
-(unsigned long long)rulePersistBatchSize;
-(void)mine;
-(void)terminateEarly;
@end

