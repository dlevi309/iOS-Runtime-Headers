/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableArray, NSArray;

@interface VCIDRSchedulerItem : NSObject {

	unsigned _framePosition;
	unsigned _budgetInCaptureFrames;
	unsigned _weightFactor;
	NSMutableArray* _streams;

}

@property (assign,nonatomic) unsigned framePosition;                      //@synthesize framePosition=_framePosition - In the implementation block
@property (assign,nonatomic) unsigned weightFactor;                       //@synthesize weightFactor=_weightFactor - In the implementation block
@property (assign,nonatomic) unsigned budgetInCaptureFrames;              //@synthesize budgetInCaptureFrames=_budgetInCaptureFrames - In the implementation block
@property (nonatomic,readonly) NSArray * streams;                         //@synthesize streams=_streams - In the implementation block
-(id)init;
-(unsigned)framePosition;
-(void)setFramePosition:(unsigned)arg1 ;
-(id)description;
-(NSArray *)streams;
-(void)dealloc;
-(unsigned)weightFactor;
-(unsigned)budgetInCaptureFrames;
-(void)addStream:(id)arg1 ;
-(long long)compareBudget:(id)arg1 ;
-(void)setBudgetInCaptureFrames:(unsigned)arg1 ;
-(void)setWeightFactor:(unsigned)arg1 ;
@end

