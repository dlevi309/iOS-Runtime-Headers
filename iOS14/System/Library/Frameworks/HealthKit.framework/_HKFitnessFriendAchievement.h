/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSDate, NSNumber;

@interface _HKFitnessFriendAchievement : HKSample <NSCopying> {

	NSUUID* _friendUUID;
	NSString* _templateUniqueName;
	NSDate* _completedDate;
	NSNumber* _value;

}

@property (nonatomic,retain) NSUUID * friendUUID;                        //@synthesize friendUUID=_friendUUID - In the implementation block
@property (nonatomic,retain) NSString * templateUniqueName;              //@synthesize templateUniqueName=_templateUniqueName - In the implementation block
@property (nonatomic,retain) NSDate * completedDate;                     //@synthesize completedDate=_completedDate - In the implementation block
@property (nonatomic,retain) NSNumber * value;                           //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)achievementWithTemplateUniqueName:(id)arg1 completedDate:(id)arg2 value:(id)arg3 friendUUID:(id)arg4 ;
+(BOOL)_isConcreteObjectClass;
-(NSDate *)completedDate;
-(void)setCompletedDate:(NSDate *)arg1 ;
-(NSString *)templateUniqueName;
-(void)setTemplateUniqueName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)friendUUID;
-(void)setFriendUUID:(NSUUID *)arg1 ;
-(void)setValue:(NSNumber *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)value;
@end

