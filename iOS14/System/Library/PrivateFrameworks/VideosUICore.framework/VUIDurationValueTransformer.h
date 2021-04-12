/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(NSDateComponentsFormatter *)secondsFormatter;
-(NSDateComponentsFormatter *)hoursMinutesFormatter;
-(void)setHoursMinutesFormatter:(NSDateComponentsFormatter *)arg1 ;
-(void)setSecondsFormatter:(NSDateComponentsFormatter *)arg1 ;
@end

