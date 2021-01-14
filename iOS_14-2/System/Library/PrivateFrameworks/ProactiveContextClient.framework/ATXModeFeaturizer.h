/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/


@protocol ATXModeFeaturizer <NSObject>
@property (assign,nonatomic,__weak) id<ATXModeFeaturizerDelegate> delegate; 
@required
-(void)stopListening;
-(id<ATXModeFeaturizerDelegate>)delegate;
-(void)beginListening;
-(void)setDelegate:(id)arg1;
-(id)provideFeatures;

@end

