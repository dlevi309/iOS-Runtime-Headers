/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

