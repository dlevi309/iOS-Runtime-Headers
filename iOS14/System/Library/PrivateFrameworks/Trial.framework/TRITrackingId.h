/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TRISubject, TRISubjectProvider, NSUUID, NSDate, NSArray;

@interface TRITrackingId : NSObject <NSSecureCoding> {

	TRISubject* _subject;
	TRISubjectProvider* _subjectProvider;
	int _projectId;
	NSUUID* _uuid;
	NSDate* _time;
	NSArray* _treatments;

}

@property (nonatomic,readonly) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) NSArray * treatments;              //@synthesize treatments=_treatments - In the implementation block
@property (nonatomic,readonly) TRISubject * subject; 
+(BOOL)supportsSecureCoding;
+(id)trackingIdWithProjectId:(int)arg1 paths:(id)arg2 ;
+(id)trackingIdWithProjectId:(int)arg1 paths:(id)arg2 treatments:(id)arg3 ;
-(NSArray *)treatments;
-(NSDate *)time;
-(TRISubject *)subject;
-(NSUUID *)uuid;
-(id)init;
-(id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subject:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subjectProvider:(id)arg4 projectId:(int)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
@end

