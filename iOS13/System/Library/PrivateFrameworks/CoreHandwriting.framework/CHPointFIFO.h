/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@interface CHPointFIFO : NSObject {

	CHPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) CHPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)clear;
-(void)flush;
-(CHPointFIFO *)nextFIFO;
-(void)addPoint:;
-(void)emitPoint:;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(CHPointFIFO *)arg1 ;
@end

