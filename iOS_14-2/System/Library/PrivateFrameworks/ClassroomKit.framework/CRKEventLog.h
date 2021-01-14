/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3 ;
-(NSSet *)events;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)passedInEvents;
-(NSSet *)passedInEventDatas;
-(BOOL)isEqualToTimeline:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventDatas:(id)arg3 ;
-(void)setPassedInEvents:(NSSet *)arg1 ;
-(void)setPassedInEventDatas:(NSSet *)arg1 ;
@end

