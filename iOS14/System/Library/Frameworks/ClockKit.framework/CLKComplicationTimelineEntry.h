/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/CLKTimelineEntry.h>

@class NSDate, CLKComplicationTemplate, NSString;

@interface CLKComplicationTimelineEntry : NSObject <CLKTimelineEntry> {

	BOOL _finalized;
	NSDate* _date;
	CLKComplicationTemplate* _complicationTemplate;
	NSString* _timelineAnimationGroup;

}

@property (assign,nonatomic) BOOL finalized;                                             //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,retain) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) CLKComplicationTemplate * complicationTemplate;               //@synthesize complicationTemplate=_complicationTemplate - In the implementation block
@property (nonatomic,copy) NSString * timelineAnimationGroup;                            //@synthesize timelineAnimationGroup=_timelineAnimationGroup - In the implementation block
@property (setter=tl_setEntryDate:,nonatomic,retain) NSDate * tl_entryDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2 ;
+(id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2 timelineAnimationGroup:(id)arg3 ;
-(BOOL)validateWithError:(id*)arg1 ;
-(void)finalize;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)description;
-(BOOL)finalized;
-(void)setFinalized:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLKComplicationTemplate *)complicationTemplate;
-(id)finalizedCopy;
-(void)setComplicationTemplate:(CLKComplicationTemplate *)arg1 ;
-(BOOL)tl_validate:(id*)arg1 ;
-(NSDate *)tl_entryDate;
-(void)tl_setEntryDate:(id)arg1 ;
-(NSString *)timelineAnimationGroup;
-(void)setTimelineAnimationGroup:(NSString *)arg1 ;
-(BOOL)validateComplicationFamily:(long long)arg1 ;
@end

