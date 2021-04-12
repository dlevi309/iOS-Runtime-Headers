/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@interface UIPointFIFO : NSObject {

	UIPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)clear;
-(void)flush;
-(void)addPoint:;
-(void)emitPoint:;
-(void)setNextFIFO:(UIPointFIFO *)arg1 ;
-(UIPointFIFO *)nextFIFO;
-(void)dealloc;
-(id)initWithFIFO:(id)arg1 ;
@end

