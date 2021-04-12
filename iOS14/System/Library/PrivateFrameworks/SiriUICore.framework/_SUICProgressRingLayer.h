/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/_SUICRingLayer.h>

@interface _SUICProgressRingLayer : _SUICRingLayer {

	BOOL _spinning;
	double _progress;

}

@property (assign,nonatomic) BOOL spinning;                //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(double)progress;
-(id)init;
-(BOOL)spinning;
-(void)setProgress:(double)arg1 ;
-(void)setSpinning:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

