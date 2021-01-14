/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXExecutableIdentifier, NSDate;

@interface ATXEngagementRecordEntry : NSObject <NSSecureCoding> {

	ATXExecutableIdentifier* _executable;
	NSDate* _dateEngaged;
	unsigned long long _engagementRecordType;

}

@property (nonatomic,readonly) ATXExecutableIdentifier * executable;                 //@synthesize executable=_executable - In the implementation block
@property (nonatomic,readonly) NSDate * dateEngaged;                                 //@synthesize dateEngaged=_dateEngaged - In the implementation block
@property (nonatomic,readonly) unsigned long long engagementRecordType;              //@synthesize engagementRecordType=_engagementRecordType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)jsonDict;
-(void)encodeWithCoder:(id)arg1 ;
-(ATXExecutableIdentifier *)executable;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)dateEngaged;
-(id)initWithExecutable:(id)arg1 dateEngaged:(id)arg2 engagementRecordType:(unsigned long long)arg3 ;
-(unsigned long long)engagementRecordType;
@end

