/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@protocol PFLResumable, PFLDataSource;
@interface PFLSession : NSObject {

	id<PFLResumable> _underlyingTask;
	id<PFLDataSource> _dataSource;

}

@property (nonatomic,retain) id<PFLResumable> underlyingTask;              //@synthesize underlyingTask=_underlyingTask - In the implementation block
@property (nonatomic,retain) id<PFLDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
+(id)sharedInstance;
+(id)sessionForTesting;
-(void)suspend;
-(id)init;
-(id<PFLDataSource>)dataSource;
-(void)setDataSource:(id<PFLDataSource>)arg1 ;
-(void)setUnderlyingTask:(id<PFLResumable>)arg1 ;
-(BOOL)resume;
-(id<PFLResumable>)underlyingTask;
-(BOOL)registerWithSource:(id)arg1 ;
-(void)updateModel:(id)arg1 modelConfiguration:(id)arg2 layerNamesToPrivatize:(id)arg3 privatizationIdentifier:(id)arg4 privatizationNormMax:(double)arg5 privatizationNormBinCount:(unsigned long long)arg6 completionHandler:(/*^block*/id)arg7 ;
@end

