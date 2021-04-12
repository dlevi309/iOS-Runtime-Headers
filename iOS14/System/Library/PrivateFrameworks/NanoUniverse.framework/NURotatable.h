/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
*/


@protocol NURotatable <NSObject>
@property (assign,nonatomic) CLLocationCoordinate2D homeCoordinate; 
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate; 
@required
-(CLLocationCoordinate2D)centerCoordinate;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 animated:(BOOL)arg2;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1;
-(CLLocationCoordinate2D)homeCoordinate;
-(void)setHomeCoordinate:(CLLocationCoordinate2D)arg1;

@end

