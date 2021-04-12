/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIEdgeInsets*)colorForCoordinate:(CGSize)arg1;
-(CGSize*)coordinateForColor:(UIEdgeInsets)arg1 isValid:(out BOOL*)arg2;

@end

