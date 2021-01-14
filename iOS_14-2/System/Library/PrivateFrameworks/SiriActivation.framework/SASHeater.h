/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@protocol SASHeaterDelegate;
@class NSTimer;

@interface SASHeater : NSObject {

	BOOL _predictedRecordRouteIsZLL;
	id<SASHeaterDelegate> _delegate;
	double _preparationStartTime;
	NSTimer* _preheatTimer;

}

@property (assign,setter=_setPreparationStartTime:,getter=_preparationStartTime,nonatomic) double preparationStartTime;              //@synthesize preparationStartTime=_preparationStartTime - In the implementation block
@property (assign,nonatomic) BOOL predictedRecordRouteIsZLL;                                                                         //@synthesize predictedRecordRouteIsZLL=_predictedRecordRouteIsZLL - In the implementation block
@property (nonatomic,retain) NSTimer * preheatTimer;                                                                                 //@synthesize preheatTimer=_preheatTimer - In the implementation block
@property (assign,nonatomic,__weak) id<SASHeaterDelegate> delegate;                                                                  //@synthesize delegate=_delegate - In the implementation block
-(id<SASHeaterDelegate>)delegate;
-(void)setDelegate:(id<SASHeaterDelegate>)arg1 ;
-(BOOL)predictedRecordRouteIsZLL;
-(void)setPredictedRecordRouteIsZLL:(BOOL)arg1 ;
-(void)_setPreparationStartTime:(double)arg1 ;
-(void)_cancelPreparation;
-(void)_suggestPreheat;
-(void)setPreheatTimer:(NSTimer *)arg1 ;
-(double)_preparationStartTime;
-(NSTimer *)preheatTimer;
-(void)updatePredictedRouteIsZLL;
-(void)prepareForUseAfterTimeInterval:(double)arg1 ;
-(void)cancelPreparation;
@end

