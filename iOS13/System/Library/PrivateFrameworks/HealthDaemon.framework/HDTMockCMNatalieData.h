/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)startDate;
-(id)endDate;
-(id)sourceId;
-(long long)recordId;
-(id)mets;
-(id)natalies;
-(id)basalNatalies;
-(id)initWithTimestamp:(double)arg1 mets:(double)arg2 active:(double)arg3 basal:(double)arg4 recordID:(long long)arg5 source:(id)arg6 ;
@end

