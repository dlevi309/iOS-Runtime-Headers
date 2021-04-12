/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSDate;

@interface DurationGroup : NSObject {

	BOOL _wasChanged;
	unsigned long long _groupId;
	NSDate* _start;
	NSDate* _end;

}

@property (readonly) unsigned long long groupId;              //@synthesize groupId=_groupId - In the implementation block
@property (retain) NSDate * start;                            //@synthesize start=_start - In the implementation block
@property (retain) NSDate * end;                              //@synthesize end=_end - In the implementation block
@property (assign) BOOL wasChanged;                           //@synthesize wasChanged=_wasChanged - In the implementation block
-(id)description;
-(NSDate *)start;
-(NSDate *)end;
-(void)setStart:(NSDate *)arg1 ;
-(void)setEnd:(NSDate *)arg1 ;
-(unsigned long long)groupId;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
-(BOOL)wasChanged;
-(void)setWasChanged:(BOOL)arg1 ;
@end

