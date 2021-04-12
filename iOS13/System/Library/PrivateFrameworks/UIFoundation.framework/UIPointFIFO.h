/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@interface UIPointFIFO : NSObject {

	UIPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)clear;
-(void)flush;
-(UIPointFIFO *)nextFIFO;
-(void)addPoint:;
-(void)emitPoint:;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(UIPointFIFO *)arg1 ;
@end

