/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUColorWheelSpace <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long mirroringBiasAxis; 
@optional
-(unsigned long long)mirroringBiasAxis;
-(void)setMirroringBiasAxis:(unsigned long long)arg1;

@required
-(unsigned long long)type;
-(UIEdgeInsets*)colorForCoordinate:(CGPoint)arg1;
-(CGPoint*)coordinateForColor:(UIEdgeInsets)arg1 isValid:(out BOOL*)arg2;

@end

