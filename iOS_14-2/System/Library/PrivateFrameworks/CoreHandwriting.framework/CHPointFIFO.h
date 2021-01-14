/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@interface CHPointFIFO : NSObject {

	CHPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) CHPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)clear;
-(void)flush;
-(void)addPoint:;
-(void)emitPoint:;
-(void)setNextFIFO:(CHPointFIFO *)arg1 ;
-(CHPointFIFO *)nextFIFO;
-(void)dealloc;
-(id)initWithFIFO:(id)arg1 ;
@end

