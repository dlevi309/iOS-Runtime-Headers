/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString, NSDateComponents, HKBiologicalSexObject, HKQuantity, HKFitzpatrickSkinTypeObject, HKBloodTypeObject, HKWheelchairUseObject, NSArray;

@interface HKDemographicsInformationWrapper : NSObject {

	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSDateComponents* _dateOfBirthComponents;
	HKBiologicalSexObject* _biologicalSexObject;
	HKQuantity* _heightQuantity;
	HKQuantity* _weightQuantity;
	HKFitzpatrickSkinTypeObject* _fitzpatrickSkinTypeObject;
	HKBloodTypeObject* _bloodTypeObject;
	HKWheelchairUseObject* _wheelchairUseObject;
	NSArray* _postalAddresses;
	NSArray* _emailAddresses;

}

@property (nonatomic,copy) NSString * firstName;                                                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * middleName;                                                //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                                                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSDateComponents * dateOfBirthComponents;                             //@synthesize dateOfBirthComponents=_dateOfBirthComponents - In the implementation block
@property (nonatomic,copy) HKBiologicalSexObject * biologicalSexObject;                          //@synthesize biologicalSexObject=_biologicalSexObject - In the implementation block
@property (nonatomic,copy) HKQuantity * heightQuantity;                                          //@synthesize heightQuantity=_heightQuantity - In the implementation block
@property (nonatomic,copy) HKQuantity * weightQuantity;                                          //@synthesize weightQuantity=_weightQuantity - In the implementation block
@property (nonatomic,copy) HKFitzpatrickSkinTypeObject * fitzpatrickSkinTypeObject;              //@synthesize fitzpatrickSkinTypeObject=_fitzpatrickSkinTypeObject - In the implementation block
@property (nonatomic,copy) HKBloodTypeObject * bloodTypeObject;                                  //@synthesize bloodTypeObject=_bloodTypeObject - In the implementation block
@property (nonatomic,copy) HKWheelchairUseObject * wheelchairUseObject;                          //@synthesize wheelchairUseObject=_wheelchairUseObject - In the implementation block
@property (nonatomic,copy) NSArray * postalAddresses;                                            //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,copy) NSArray * emailAddresses;                                             //@synthesize emailAddresses=_emailAddresses - In the implementation block
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSArray *)postalAddresses;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(void)setDateOfBirthComponents:(NSDateComponents *)arg1 ;
-(void)setHeightQuantity:(HKQuantity *)arg1 ;
-(void)setWeightQuantity:(HKQuantity *)arg1 ;
-(NSDateComponents *)dateOfBirthComponents;
-(HKBiologicalSexObject *)biologicalSexObject;
-(HKQuantity *)heightQuantity;
-(HKQuantity *)weightQuantity;
-(HKBloodTypeObject *)bloodTypeObject;
-(HKFitzpatrickSkinTypeObject *)fitzpatrickSkinTypeObject;
-(HKWheelchairUseObject *)wheelchairUseObject;
-(void)setBiologicalSexObject:(HKBiologicalSexObject *)arg1 ;
-(void)setFitzpatrickSkinTypeObject:(HKFitzpatrickSkinTypeObject *)arg1 ;
-(void)setBloodTypeObject:(HKBloodTypeObject *)arg1 ;
-(void)setWheelchairUseObject:(HKWheelchairUseObject *)arg1 ;
@end

