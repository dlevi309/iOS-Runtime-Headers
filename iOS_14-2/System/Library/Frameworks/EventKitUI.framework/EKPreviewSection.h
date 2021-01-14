/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSArray, NSDate;

@interface EKPreviewSection : NSObject {

	NSArray* _events;
	NSDate* _date;

}

@property (nonatomic,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
+(id)sectionWithDate:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(NSArray *)events;
@end

