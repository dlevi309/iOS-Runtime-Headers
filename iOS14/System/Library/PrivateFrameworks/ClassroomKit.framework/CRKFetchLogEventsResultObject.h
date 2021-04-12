/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class CRKEventLog, NSDate, NSString;

@interface CRKFetchLogEventsResultObject : CATTaskResultObject {

	CRKEventLog* _eventLog;
	NSDate* _currentDate;
	NSString* _sessionToken;

}

@property (nonatomic,retain) CRKEventLog * eventLog;              //@synthesize eventLog=_eventLog - In the implementation block
@property (nonatomic,retain) NSDate * currentDate;                //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,copy) NSString * sessionToken;               //@synthesize sessionToken=_sessionToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)currentDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(id)initWithCoder:(id)arg1 ;
-(CRKEventLog *)eventLog;
-(void)setEventLog:(CRKEventLog *)arg1 ;
@end

