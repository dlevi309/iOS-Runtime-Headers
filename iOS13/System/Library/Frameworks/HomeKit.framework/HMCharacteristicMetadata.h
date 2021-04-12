/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(NSNumber *)maxLength;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(NSString *)units;
-(void)setUnits:(NSString *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(NSString *)manufacturerDescription;
-(NSArray *)validValues;
-(void)setManufacturerDescription:(NSString *)arg1 ;
-(void)setValidValues:(NSArray *)arg1 ;
@end

