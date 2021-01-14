/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADEntityWrapper.h>

@interface CADEventEntityWrapper : CADEntityWrapper {

	double _occurrenceDate;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)occurrenceDate;
-(id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2 occurrenceDate:(double)arg3 ;
@end

