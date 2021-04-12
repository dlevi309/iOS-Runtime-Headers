/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isValid;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
@end

