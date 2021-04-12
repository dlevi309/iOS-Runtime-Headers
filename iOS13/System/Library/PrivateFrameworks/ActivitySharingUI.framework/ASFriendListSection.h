/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)rows;
-(void)setRows:(NSArray *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithDate:(id)arg1 andRows:(id)arg2 ;
-(BOOL)containsFriendListRow:(id)arg1 ;
@end

