/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDate;

@interface CRKEventLog : NSObject <NSSecureCoding> {

	NSSet* mLazilyLoadedEvents;
	NSDate* _startDate;
	NSDate* _endDate;
	NSSet* _passedInEvents;
	NSSet* _passedInEventDatas;

}

@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSSet * passedInEvents;                  //@synthesize passedInEvents=_passedInEvents - In the implementation block
@property (nonatomic,copy) NSSet * passedInEventDatas;              //@synthesize passedInEventDatas=_passedInEventDatas - In the implementation block
@property (nonatomic,copy,readonly) NSSet * events; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3 ;
-(NSSet *)events;
-(NSSet *)passedInEvents;
-(NSSet *)passedInEventDatas;
-(BOOL)isEqualToTimeline:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventDatas:(id)arg3 ;
-(void)setPassedInEvents:(NSSet *)arg1 ;
-(void)setPassedInEventDatas:(NSSet *)arg1 ;
@end

