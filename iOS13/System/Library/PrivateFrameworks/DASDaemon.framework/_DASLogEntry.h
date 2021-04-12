/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
*/


@class NSDate, NSString;

@interface _DASLogEntry : NSObject {

	NSDate* _date;
	NSString* _category;
	NSString* _message;

}

@property (nonatomic,retain) NSDate * date;                    //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * message;               //@synthesize message=_message - In the implementation block
+(id)logEntryForDate:(id)arg1 category:(id)arg2 message:(id)arg3 ;
-(id)description;
-(NSDate *)date;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
@end

