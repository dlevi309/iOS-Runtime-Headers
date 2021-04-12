/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNSecondPassController <NSObject>
@property (copy) id beginSecondPassHandler; 
@property (copy) id endSecondPassHandler; 
@required
-(void)setBeginSecondPassHandler:(/*^block*/id)arg1;
-(void)setEndSecondPassHandler:(/*^block*/id)arg1;
-(void)firstPassDidProduceResult:(id)arg1;
-(void)secondPassDidProduceResult:(id)arg1;
-(id)beginSecondPassHandler;
-(id)endSecondPassHandler;

@end

