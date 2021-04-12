/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

@interface VUIDurationValueTransformer : NSValueTransformer {

	NSDateComponentsFormatter* _hoursMinutesFormatter;
	NSDateComponentsFormatter* _secondsFormatter;

}

@property (nonatomic,retain) NSDateComponentsFormatter * hoursMinutesFormatter;              //@synthesize hoursMinutesFormatter=_hoursMinutesFormatter - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * secondsFormatter;                   //@synthesize secondsFormatter=_secondsFormatter - In the implementation block
+(void)initialize;
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(NSDateComponentsFormatter *)secondsFormatter;
-(NSDateComponentsFormatter *)hoursMinutesFormatter;
-(void)setHoursMinutesFormatter:(NSDateComponentsFormatter *)arg1 ;
-(void)setSecondsFormatter:(NSDateComponentsFormatter *)arg1 ;
@end

