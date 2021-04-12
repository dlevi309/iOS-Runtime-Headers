/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@interface PKInkFeatheringDescriptor : NSObject {

	double _startCapTime;
	double _startCapFade;
	double _endCapTime;
	double _endCapFade;

}

@property (assign,nonatomic) double startCapTime;              //@synthesize startCapTime=_startCapTime - In the implementation block
@property (assign,nonatomic) double startCapFade;              //@synthesize startCapFade=_startCapFade - In the implementation block
@property (assign,nonatomic) double endCapTime;                //@synthesize endCapTime=_endCapTime - In the implementation block
@property (assign,nonatomic) double endCapFade;                //@synthesize endCapFade=_endCapFade - In the implementation block
+(id)descriptorWithStartCapTime:(double)arg1 startCapFade:(double)arg2 endCapTime:(double)arg3 endCapFade:(double)arg4 ;
-(void)setStartCapTime:(double)arg1 ;
-(void)setStartCapFade:(double)arg1 ;
-(void)setEndCapTime:(double)arg1 ;
-(void)setEndCapFade:(double)arg1 ;
-(double)startCapTime;
-(double)startCapFade;
-(double)endCapTime;
-(double)endCapFade;
@end

