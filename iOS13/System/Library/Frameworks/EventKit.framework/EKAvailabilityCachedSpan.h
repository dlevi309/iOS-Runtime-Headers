/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSDate, EKAvailabilitySpan;

@interface EKAvailabilityCachedSpan : NSObject {

	NSDate* _creationDate;
	EKAvailabilitySpan* _span;

}

@property (nonatomic,retain) NSDate * creationDate;                  //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) EKAvailabilitySpan * span;              //@synthesize span=_span - In the implementation block
-(id)description;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(EKAvailabilitySpan *)span;
-(void)setSpan:(EKAvailabilitySpan *)arg1 ;
-(id)initWithSpan:(id)arg1 ;
@end

