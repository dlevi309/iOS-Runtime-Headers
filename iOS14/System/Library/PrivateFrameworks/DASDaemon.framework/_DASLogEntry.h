/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(void)setDate:(NSDate *)arg1 ;
-(id)description;
-(NSDate *)date;
@end

