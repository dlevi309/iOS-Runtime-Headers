/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


@class NSMutableDictionary;

@interface DSDateFormatter : NSObject {

	NSMutableDictionary* _dateFormatters;

}

@property (nonatomic,retain) NSMutableDictionary * dateFormatters;              //@synthesize dateFormatters=_dateFormatters - In the implementation block
+(id)sharedFormatter;
-(id)init;
-(NSMutableDictionary *)dateFormatters;
-(id)formatterWithType:(long long)arg1 ;
-(void)setDateFormatters:(NSMutableDictionary *)arg1 ;
@end

