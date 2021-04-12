/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMSleepData : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSUUID* fSourceId;
	NSUUID* fSessionId;
	NSDate* fEventTime;
	long long fEventType;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) NSDate * eventTime; 
@property (nonatomic,readonly) long long eventType; 
+(BOOL)supportsSecureCoding;
+(id)eventTypeName:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)eventType;
-(NSUUID *)sessionId;
-(NSUUID *)sourceId;
-(NSDate *)eventTime;
-(unsigned long long)recordId;
-(id)initWithSessionId:(id)arg1 ;
-(id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 eventTime:(id)arg4 eventType:(long long)arg5 ;
-(void)convertToSpringTrackerEntry:(CLSpringTrackerEntry*)arg1 ;
-(id)initWithSpringEntry:(const CLSpringTrackerEntry*)arg1 ;
@end

