/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSDate;

@interface NTKTimelineEntryModel : NSObject {

	NSDate* _entryDate;

}

@property (nonatomic,retain) NSDate * entryDate;              //@synthesize entryDate=_entryDate - In the implementation block
-(NSDate *)entryDate;
-(void)setEntryDate:(NSDate *)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(id)entryForComplicationFamily:(long long)arg1 ;
@end

