/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMFUnfairLock, NSNumber, NSString, NSArray, NSUUID;

@interface HMCharacteristicMetadata : NSObject <NSSecureCoding, HMObjectMerge> {

	HMFUnfairLock* _lock;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	NSNumber* _maxLength;
	NSString* _format;
	NSString* _units;
	NSString* _manufacturerDescription;
	NSArray* _validValues;

}

@property (nonatomic,retain) NSNumber * minimumValue;                       //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;                       //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                          //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                          //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) NSString * format;                               //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSString * units;                                //@synthesize units=_units - In the implementation block
@property (nonatomic,copy) NSString * manufacturerDescription;              //@synthesize manufacturerDescription=_manufacturerDescription - In the implementation block
@property (nonatomic,copy) NSArray * validValues;                           //@synthesize validValues=_validValues - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)units;
-(NSNumber *)stepValue;
-(void)setFormat:(NSString *)arg1 ;
-(void)setUnits:(NSString *)arg1 ;
-(NSNumber *)maximumValue;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSString *)format;
-(id)init;
-(NSNumber *)maxLength;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSArray *)validValues;
-(NSString *)description;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)minimumValue;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(NSString *)manufacturerDescription;
-(void)setManufacturerDescription:(NSString *)arg1 ;
-(void)setValidValues:(NSArray *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
@end

