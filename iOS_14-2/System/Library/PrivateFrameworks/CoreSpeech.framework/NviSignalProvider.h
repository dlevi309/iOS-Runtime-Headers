/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol NviSignalProvider <NSObject>
@property (nonatomic,readonly) unsigned long long sigType; 
@required
-(void)addDelegate:(id)arg1;
-(void)removeDelegate:(id)arg1;
-(unsigned long long)sigType;
-(void)reset;
-(id)initWithDataSource:(id)arg1 assetsProvider:(id)arg2;
-(void)startWithNviContext:(id)arg1 didStartHandler:(/*^block*/id)arg2;
-(void)stopWithDidStopHandler:(/*^block*/id)arg1;

@end

