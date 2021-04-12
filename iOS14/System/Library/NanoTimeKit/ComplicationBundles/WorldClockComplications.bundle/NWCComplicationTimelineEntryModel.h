/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/WorldClockComplications.bundle/WorldClockComplications
*/


@class NSDate;

@interface NWCComplicationTimelineEntryModel : NSObject {

	NSDate* _entryDate;

}

@property (nonatomic,readonly) NSDate * entryDate;              //@synthesize entryDate=_entryDate - In the implementation block
-(NSDate *)entryDate;
-(id)initWithEntryDate:(id)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(id)timelineEntryForComplicationFamily:(long long)arg1 ;
@end

