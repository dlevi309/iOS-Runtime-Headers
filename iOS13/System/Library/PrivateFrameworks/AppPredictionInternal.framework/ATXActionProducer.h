/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol ATXActionProducer <NSObject>
@property (assign,nonatomic,__weak) id<ATXActionProducerDelegate> delegate; 
@required
-(id<ATXActionProducerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)produceActions;

@end

