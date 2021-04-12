/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKEvent, NSArray, NSSet;

@interface EKSeriesDetails : NSObject <NSCopying> {

	EKEvent* _masterEvent;
	NSArray* _detachedEvents;
	NSSet* _exceptionDates;

}

@property (retain) EKEvent * masterEvent;                 //@synthesize masterEvent=_masterEvent - In the implementation block
@property (retain) NSArray * detachedEvents;              //@synthesize detachedEvents=_detachedEvents - In the implementation block
@property (retain) NSSet * exceptionDates;                //@synthesize exceptionDates=_exceptionDates - In the implementation block
-(EKEvent *)masterEvent;
-(NSSet *)exceptionDates;
-(void)setExceptionDates:(NSSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMasterEvent:(EKEvent *)arg1 ;
-(NSArray *)detachedEvents;
-(void)setDetachedEvents:(NSArray *)arg1 ;
@end

