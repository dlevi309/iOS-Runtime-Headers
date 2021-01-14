/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSUUID, NSDate, NSNumber;

@interface CMNatalieData : CMLogItem {

	long long fRecordId;
	double fStartDate;
	long long fActivityType;
	double fMets;
	double fNatalies;
	double fBasalNatalies;
	NSUUID* fSourceId;

}

@property (nonatomic,readonly) long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSNumber * mets; 
@property (nonatomic,readonly) NSNumber * natalies; 
@property (nonatomic,readonly) NSNumber * basalNatalies; 
@property (nonatomic,readonly) long long activityType; 
+(BOOL)supportsSecureCoding;
+(id)maxNatalieEntries;
-(NSNumber *)mets;
-(long long)recordId;
-(NSUUID *)sourceId;
-(long long)activityType;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)natalies;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithStartDate:(double)arg1 recordId:(long long)arg2 activityType:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 sourceId:(id)arg7 ;
-(NSNumber *)basalNatalies;
-(void)dealloc;
@end

