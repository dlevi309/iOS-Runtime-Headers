/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <libobjc.A.dylib/HKSimpleDataEntryItemDelegate.h>

@protocol WDBuddyFlowUserInfoDelegate;
@class NSMutableDictionary, NSString, NSDateComponents, NSNumber;

@interface WDBuddyFlowUserInfo : NSObject <HKSimpleDataEntryItemDelegate> {

	NSMutableDictionary* _dataEntryItems;
	id<WDBuddyFlowUserInfoDelegate> _delegate;
	NSString* _firstName;
	NSString* _lastName;
	NSDateComponents* _dateOfBirthComponents;
	NSNumber* _sex;
	NSNumber* _heightInCm;
	NSNumber* _weightInKg;
	NSNumber* _originalHeightInCm;
	NSNumber* _originalWeightInKg;

}

@property (nonatomic,retain) NSNumber * originalHeightInCm;                                //@synthesize originalHeightInCm=_originalHeightInCm - In the implementation block
@property (nonatomic,retain) NSNumber * originalWeightInKg;                                //@synthesize originalWeightInKg=_originalWeightInKg - In the implementation block
@property (assign,nonatomic,__weak) id<WDBuddyFlowUserInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                         //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                          //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSDateComponents * dateOfBirthComponents;                     //@synthesize dateOfBirthComponents=_dateOfBirthComponents - In the implementation block
@property (nonatomic,retain) NSNumber * sex;                                               //@synthesize sex=_sex - In the implementation block
@property (nonatomic,retain) NSNumber * heightInCm;                                        //@synthesize heightInCm=_heightInCm - In the implementation block
@property (nonatomic,retain) NSNumber * weightInKg;                                        //@synthesize weightInKg=_weightInKg - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buddyFlowUserInfoWithDemographicsInformation:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setLastName:(NSString *)arg1 ;
-(id)init;
-(void)setFirstName:(NSString *)arg1 ;
-(id<WDBuddyFlowUserInfoDelegate>)delegate;
-(void)setDelegate:(id<WDBuddyFlowUserInfoDelegate>)arg1 ;
-(void)setSex:(NSNumber *)arg1 ;
-(id)_medicalIDName;
-(NSDateComponents *)dateOfBirthComponents;
-(NSNumber *)heightInCm;
-(id)defaultDataEntryItems;
-(NSNumber *)sex;
-(NSNumber *)weightInKg;
-(void)dataEntryItemDidUpdateValue:(id)arg1 ;
-(id)_createDateOfBirthEntryItem;
-(id)_todayBirthdayDateComponents;
-(void)setDateOfBirthComponents:(NSDateComponents *)arg1 ;
-(void)setOriginalHeightInCm:(NSNumber *)arg1 ;
-(void)setOriginalWeightInKg:(NSNumber *)arg1 ;
-(void)setHeightInCm:(NSNumber *)arg1 ;
-(void)setWeightInKg:(NSNumber *)arg1 ;
-(id)_dataEntryItemForRegistrantField:(unsigned long long)arg1 ;
-(id)_createSexEntryItem;
-(id)medicalIDRepresentation;
-(void)saveChangesToHealthStore:(id)arg1 withMedicalIDTemplate:(id)arg2 ;
-(NSNumber *)originalHeightInCm;
-(NSNumber *)originalWeightInKg;
@end

