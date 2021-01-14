/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@class NSDate;

@interface MSPBTimerContext : NSObject {

	BOOL _isValid;
	NSDate* _date;

}

@property (assign,nonatomic) BOOL isValid;               //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)contextWithDate:(id)arg1 ;
-(id)init;
-(void)setDate:(NSDate *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)isValid;
-(NSDate *)date;
@end

