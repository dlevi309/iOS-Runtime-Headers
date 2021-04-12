/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/_SUICRingLayer.h>

@interface _SUICProgressRingLayer : _SUICRingLayer {

	BOOL _spinning;
	double _progress;

}

@property (assign,nonatomic) BOOL spinning;                //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(id)init;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)spinning;
-(void)setSpinning:(BOOL)arg1 ;
@end

