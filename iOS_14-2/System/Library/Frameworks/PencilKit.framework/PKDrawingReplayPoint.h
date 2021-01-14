/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKDrawingReplayPoint : NSObject {

	unsigned long long _type;
	double _delay;
	CGPoint _point;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) CGPoint point;                        //@synthesize point=_point - In the implementation block
@property (assign,nonatomic) double delay;                         //@synthesize delay=_delay - In the implementation block
-(CGPoint)point;
-(void)setDelay:(double)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(double)delay;
-(unsigned long long)type;
-(void)setPoint:(CGPoint)arg1 ;
-(SCD_Struct_PK6)pkInputPointWithOffset:(CGPoint)arg1 ;
@end

