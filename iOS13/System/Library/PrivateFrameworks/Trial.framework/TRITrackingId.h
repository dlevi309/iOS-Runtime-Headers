/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (readonly) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (readonly) NSArray * treatments;              //@synthesize treatments=_treatments - In the implementation block
@property (readonly) TRISubject * subject; 
+(BOOL)supportsSecureCoding;
+(id)trackingIdWithProjectId:(int)arg1 treatments:(id)arg2 ;
+(id)trackingIdWithProjectId:(int)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSDate *)time;
-(TRISubject *)subject;
-(NSArray *)treatments;
-(id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subjectProvider:(id)arg4 projectId:(int)arg5 ;
-(id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subject:(id)arg4 ;
@end

