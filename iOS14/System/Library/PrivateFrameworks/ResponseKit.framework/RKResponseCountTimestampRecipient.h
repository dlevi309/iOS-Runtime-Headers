/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@class NSDate;

@interface RKResponseCountTimestampRecipient : NSObject {

	BOOL _hasSameRecipient;
	int _count;
	NSDate* _timestamp;

}

@property (assign) int count;                          //@synthesize count=_count - In the implementation block
@property (retain) NSDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) BOOL hasSameRecipient;              //@synthesize hasSameRecipient=_hasSameRecipient - In the implementation block
-(void)setCount:(int)arg1 ;
-(NSDate *)timestamp;
-(int)count;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)initWithCount:(int)arg1 timestamp:(id)arg2 hasSameRecipient:(BOOL)arg3 ;
-(BOOL)hasSameRecipient;
-(void)setHasSameRecipient:(BOOL)arg1 ;
@end

