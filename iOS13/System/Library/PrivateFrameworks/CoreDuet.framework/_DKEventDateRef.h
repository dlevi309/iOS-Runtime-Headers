/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSDate, _DKEvent;

@interface _DKEventDateRef : NSObject {

	NSDate* _date;
	unsigned long long _type;
	_DKEvent* _event;

}

@property (retain) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (assign) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (retain) _DKEvent * event;                     //@synthesize event=_event - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 type:(unsigned long long)arg2 event:(id)arg3 ;
-(void)setDate:(NSDate *)arg1 ;
-(_DKEvent *)event;
-(void)setEvent:(_DKEvent *)arg1 ;
@end

