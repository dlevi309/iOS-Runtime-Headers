/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)model;
-(NSString *)manufacturer;
-(id)init;
-(void)setManufacturer:(id)arg1;
-(CLLocation *)location;
-(void)setLocation:(id)arg1;
-(INImage *)mapAnnotationImage;
-(void)setMapAnnotationImage:(id)arg1;
-(NSString *)registrationPlate;
-(void)setRegistrationPlate:(id)arg1;
-(void)setModel:(id)arg1;

@end

