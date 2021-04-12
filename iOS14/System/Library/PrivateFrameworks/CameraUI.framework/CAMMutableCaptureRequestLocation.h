/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

@class CLLocation, CLHeading;


@protocol CAMMutableCaptureRequestLocation <NSObject>
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLHeading * heading; 
@required
-(CLHeading *)heading;
-(CLLocation *)location;
-(void)setLocation:(id)arg1;
-(void)setHeading:(id)arg1;

@end

