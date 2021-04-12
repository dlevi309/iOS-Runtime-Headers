/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
*/


@class NSDate, NSArray;

@interface ASFriendListSection : NSObject {

	NSDate* _startDate;
	NSArray* _rows;

}

@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSArray * rows;                  //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) NSDate * endDate; 
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setRows:(NSArray *)arg1 ;
-(NSDate *)startDate;
-(NSArray *)rows;
-(id)initWithDate:(id)arg1 andRows:(id)arg2 ;
-(BOOL)containsFriendListRow:(id)arg1 ;
@end

