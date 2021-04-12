/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface EKExceptionDate : EKObject <NSCopying>

@property (nonatomic,retain) NSDate * date; 
+(Class)frozenClass;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
@end

