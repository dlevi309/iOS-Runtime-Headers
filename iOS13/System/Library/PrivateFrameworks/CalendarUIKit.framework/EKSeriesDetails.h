/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(EKEvent *)masterEvent;
-(NSSet *)exceptionDates;
-(void)setExceptionDates:(NSSet *)arg1 ;
-(void)setMasterEvent:(EKEvent *)arg1 ;
-(NSArray *)detachedEvents;
-(void)setDetachedEvents:(NSArray *)arg1 ;
@end

