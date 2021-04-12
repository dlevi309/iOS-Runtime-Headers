/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMExerciseMinuteData : NSObject <NSSecureCoding, NSCopying> {

	long long fRecordId;
	double fStartDate;
	NSUUID* fSourceId;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
+(BOOL)supportsSecureCoding;
+(id)maxExerciseMinuteDataEntries;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSUUID *)sourceId;
-(long long)recordId;
-(id)initWithStartDate:(double)arg1 recordId:(long long)arg2 sourceId:(id)arg3 ;
@end

