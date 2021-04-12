/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray, NSSet, HKUnit, NSDateComponents;

@interface ACHTemplate : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_AC5 _packedVisibilityStart;
	SCD_Struct_AC5 _packedVisibilityEnd;
	SCD_Struct_AC5 _packedAvailabilityStart;
	SCD_Struct_AC5 _packedAvailabilityEnd;
	unsigned char _minimumEngineVersion;
	unsigned char _creatorDevice;
	unsigned char _earnLimit;
	unsigned char _duplicateRemovalStrategy;
	unsigned char _earnDateStrategy;
	BOOL _displaysEarnedInstanceCount;
	BOOL _availableOnPairedDevice;
	unsigned long long _key;
	NSString* _uniqueName;
	unsigned long long _version;
	NSDate* _createdDate;
	NSString* _sourceName;
	NSString* _predicate;
	NSString* _gracePredicate;
	NSString* _valueExpression;
	NSString* _graceValueExpression;
	NSString* _progressExpression;
	NSString* _graceProgressExpression;
	NSString* _goalExpression;
	NSString* _graceGoalExpression;
	unsigned long long _triggers;
	NSString* _visibilityPredicate;
	NSString* _graceVisibilityPredicate;
	NSString* _availabilityPredicate;
	NSArray* _availableCountryCodes;
	NSString* _alertabilityPredicate;
	NSSet* _alertDates;
	unsigned long long _duplicateRemovalCalendarUnit;
	HKUnit* _canonicalUnit;
	unsigned long long _displayOrder;
	NSArray* _availableSuffixes;
	unsigned long long _mobileAssetVersion;

}

@property (assign,nonatomic) unsigned long long key;                                       //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * uniqueName;                                        //@synthesize uniqueName=_uniqueName - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                   //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned char minimumEngineVersion;                           //@synthesize minimumEngineVersion=_minimumEngineVersion - In the implementation block
@property (nonatomic,retain) NSDate * createdDate;                                         //@synthesize createdDate=_createdDate - In the implementation block
@property (assign,nonatomic) unsigned char creatorDevice;                                  //@synthesize creatorDevice=_creatorDevice - In the implementation block
@property (nonatomic,retain) NSString * sourceName;                                        //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,retain) NSString * predicate;                                         //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSString * gracePredicate;                                    //@synthesize gracePredicate=_gracePredicate - In the implementation block
@property (nonatomic,retain) NSString * valueExpression;                                   //@synthesize valueExpression=_valueExpression - In the implementation block
@property (nonatomic,retain) NSString * graceValueExpression;                              //@synthesize graceValueExpression=_graceValueExpression - In the implementation block
@property (nonatomic,retain) NSString * progressExpression;                                //@synthesize progressExpression=_progressExpression - In the implementation block
@property (nonatomic,retain) NSString * graceProgressExpression;                           //@synthesize graceProgressExpression=_graceProgressExpression - In the implementation block
@property (nonatomic,retain) NSString * goalExpression;                                    //@synthesize goalExpression=_goalExpression - In the implementation block
@property (nonatomic,retain) NSString * graceGoalExpression;                               //@synthesize graceGoalExpression=_graceGoalExpression - In the implementation block
@property (assign,nonatomic) unsigned long long triggers;                                  //@synthesize triggers=_triggers - In the implementation block
@property (assign,nonatomic) unsigned char earnLimit;                                      //@synthesize earnLimit=_earnLimit - In the implementation block
@property (nonatomic,retain) NSString * visibilityPredicate;                               //@synthesize visibilityPredicate=_visibilityPredicate - In the implementation block
@property (nonatomic,retain) NSString * graceVisibilityPredicate;                          //@synthesize graceVisibilityPredicate=_graceVisibilityPredicate - In the implementation block
@property (nonatomic,retain) NSDateComponents * visibilityStart; 
@property (nonatomic,retain) NSDateComponents * visibilityEnd; 
@property (nonatomic,retain) NSString * availabilityPredicate;                             //@synthesize availabilityPredicate=_availabilityPredicate - In the implementation block
@property (nonatomic,retain) NSDateComponents * availabilityStart; 
@property (nonatomic,retain) NSDateComponents * availabilityEnd; 
@property (nonatomic,retain) NSArray * availableCountryCodes;                              //@synthesize availableCountryCodes=_availableCountryCodes - In the implementation block
@property (nonatomic,retain) NSString * alertabilityPredicate;                             //@synthesize alertabilityPredicate=_alertabilityPredicate - In the implementation block
@property (nonatomic,retain) NSSet * alertDates;                                           //@synthesize alertDates=_alertDates - In the implementation block
@property (assign,nonatomic) unsigned char duplicateRemovalStrategy;                       //@synthesize duplicateRemovalStrategy=_duplicateRemovalStrategy - In the implementation block
@property (assign,nonatomic) unsigned long long duplicateRemovalCalendarUnit;              //@synthesize duplicateRemovalCalendarUnit=_duplicateRemovalCalendarUnit - In the implementation block
@property (assign,nonatomic) unsigned char earnDateStrategy;                               //@synthesize earnDateStrategy=_earnDateStrategy - In the implementation block
@property (nonatomic,retain) HKUnit * canonicalUnit;                                       //@synthesize canonicalUnit=_canonicalUnit - In the implementation block
@property (assign,nonatomic) unsigned long long displayOrder;                              //@synthesize displayOrder=_displayOrder - In the implementation block
@property (assign,nonatomic) BOOL displaysEarnedInstanceCount;                             //@synthesize displaysEarnedInstanceCount=_displaysEarnedInstanceCount - In the implementation block
@property (nonatomic,retain) NSArray * availableSuffixes;                                  //@synthesize availableSuffixes=_availableSuffixes - In the implementation block
@property (assign,nonatomic) BOOL availableOnPairedDevice;                                 //@synthesize availableOnPairedDevice=_availableOnPairedDevice - In the implementation block
@property (assign,nonatomic) unsigned long long mobileAssetVersion;                        //@synthesize mobileAssetVersion=_mobileAssetVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(NSString *)arg1 ;
-(NSString *)predicate;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setKey:(unsigned long long)arg1 ;
-(NSString *)uniqueName;
-(void)setValueExpression:(NSString *)arg1 ;
-(NSString *)valueExpression;
-(NSString *)sourceName;
-(void)setSourceName:(NSString *)arg1 ;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(unsigned long long)triggers;
-(unsigned long long)displayOrder;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(void)setTriggers:(unsigned long long)arg1 ;
-(void)setUniqueName:(NSString *)arg1 ;
-(HKUnit *)canonicalUnit;
-(unsigned char)creatorDevice;
-(id)initWithCodable:(id)arg1 ;
-(void)setCreatorDevice:(unsigned char)arg1 ;
-(void)setMinimumEngineVersion:(unsigned char)arg1 ;
-(void)setGracePredicate:(NSString *)arg1 ;
-(void)setEarnLimit:(unsigned char)arg1 ;
-(void)setVisibilityPredicate:(NSString *)arg1 ;
-(void)setGraceVisibilityPredicate:(NSString *)arg1 ;
-(void)setDuplicateRemovalStrategy:(unsigned char)arg1 ;
-(void)setDuplicateRemovalCalendarUnit:(unsigned long long)arg1 ;
-(void)setEarnDateStrategy:(unsigned char)arg1 ;
-(void)setCanonicalUnit:(HKUnit *)arg1 ;
-(void)setProgressExpression:(NSString *)arg1 ;
-(void)setGoalExpression:(NSString *)arg1 ;
-(void)setDisplaysEarnedInstanceCount:(BOOL)arg1 ;
-(void)setVisibilityStart:(NSDateComponents *)arg1 ;
-(void)setVisibilityEnd:(NSDateComponents *)arg1 ;
-(void)setAvailabilityStart:(NSDateComponents *)arg1 ;
-(void)setAvailabilityEnd:(NSDateComponents *)arg1 ;
-(void)setAvailableCountryCodes:(NSArray *)arg1 ;
-(void)setAlertDates:(NSSet *)arg1 ;
-(NSDateComponents *)visibilityStart;
-(NSString *)visibilityPredicate;
-(NSDateComponents *)visibilityEnd;
-(NSArray *)availableCountryCodes;
-(unsigned long long)mobileAssetVersion;
-(BOOL)availableOnPairedDevice;
-(NSDateComponents *)availabilityStart;
-(NSString *)goalExpression;
-(NSArray *)availableSuffixes;
-(void)setAvailabilityPredicate:(NSString *)arg1 ;
-(void)setAlertabilityPredicate:(NSString *)arg1 ;
-(void)setAvailableSuffixes:(NSArray *)arg1 ;
-(void)setGraceValueExpression:(NSString *)arg1 ;
-(void)setGraceProgressExpression:(NSString *)arg1 ;
-(void)setGraceGoalExpression:(NSString *)arg1 ;
-(void)setAvailableOnPairedDevice:(BOOL)arg1 ;
-(void)setMobileAssetVersion:(unsigned long long)arg1 ;
-(unsigned char)minimumEngineVersion;
-(unsigned char)earnLimit;
-(NSString *)availabilityPredicate;
-(NSString *)alertabilityPredicate;
-(NSSet *)alertDates;
-(unsigned char)duplicateRemovalStrategy;
-(unsigned long long)duplicateRemovalCalendarUnit;
-(unsigned char)earnDateStrategy;
-(NSString *)progressExpression;
-(BOOL)displaysEarnedInstanceCount;
-(NSString *)gracePredicate;
-(NSString *)graceVisibilityPredicate;
-(NSString *)graceValueExpression;
-(NSString *)graceProgressExpression;
-(NSString *)graceGoalExpression;
-(NSDateComponents *)availabilityEnd;
-(id)_displayStringForStringValues:(id)arg1 ;
-(id)_displayStringForAlertDates:(id)arg1 ;
@end

