/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <CoreMotion/CMNatalieData.h>

@class NSDate, NSUUID;

@interface HDTMockCMNatalieData : CMNatalieData {

	NSDate* _date;
	double _mets;
	double _active;
	double _basal;
	long long _recordID;
	NSUUID* _source;

}
+(BOOL)supportsSecureCoding;
-(id)endDate;
-(id)mets;
-(long long)recordId;
-(id)sourceId;
-(id)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)natalies;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)basalNatalies;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 mets:(double)arg2 active:(double)arg3 basal:(double)arg4 recordID:(long long)arg5 source:(id)arg6 ;
@end

