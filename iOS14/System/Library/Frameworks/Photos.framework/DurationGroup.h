/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)end;
-(NSDate *)start;
-(unsigned long long)groupId;
-(id)description;
-(void)setEnd:(NSDate *)arg1 ;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
-(BOOL)wasChanged;
-(void)setWasChanged:(BOOL)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
@end

