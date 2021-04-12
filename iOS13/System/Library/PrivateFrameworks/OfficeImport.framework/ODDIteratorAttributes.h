/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface ODDIteratorAttributes : NSObject {

	int mAxis;
	int mPointType;
	BOOL mHideLastTransition;
	int mStart;
	unsigned mCount;
	int mStep;

}
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(int)start;
-(int)step;
-(int)axis;
-(void)setAxis:(int)arg1 ;
-(void)setStart:(int)arg1 ;
-(void)setStep:(int)arg1 ;
-(int)pointType;
-(void)setPointType:(int)arg1 ;
-(BOOL)hideLastTransition;
-(void)setHideLastTransition:(BOOL)arg1 ;
@end

