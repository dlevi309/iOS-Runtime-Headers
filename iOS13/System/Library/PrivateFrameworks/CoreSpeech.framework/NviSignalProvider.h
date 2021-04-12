/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol NviSignalProvider <NSObject>
@property (nonatomic,readonly) unsigned long long sigType; 
@required
-(void)reset;
-(void)addDelegate:(id)arg1;
-(void)removeDelegate:(id)arg1;
-(id)initWithDataSource:(id)arg1 assetsProvider:(id)arg2;
-(void)startWithNviContext:(id)arg1 didStartHandler:(/*^block*/id)arg2;
-(void)stopWithDidStopHandler:(/*^block*/id)arg1;
-(unsigned long long)sigType;

@end

