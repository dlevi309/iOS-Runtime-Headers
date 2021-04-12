/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class CLLocation, NSString, INImage;


@protocol INRideVehicleExport <NSObject,JSExport>
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,copy) NSString * registrationPlate; 
@property (nonatomic,copy) NSString * manufacturer; 
@property (nonatomic,copy) NSString * model; 
@property (nonatomic,copy) INImage * mapAnnotationImage; 
@required
-(id)init;
-(NSString *)model;
-(CLLocation *)location;
-(void)setModel:(id)arg1;
-(void)setLocation:(id)arg1;
-(NSString *)manufacturer;
-(void)setManufacturer:(id)arg1;
-(INImage *)mapAnnotationImage;
-(void)setMapAnnotationImage:(id)arg1;
-(NSString *)registrationPlate;
-(void)setRegistrationPlate:(id)arg1;

@end

