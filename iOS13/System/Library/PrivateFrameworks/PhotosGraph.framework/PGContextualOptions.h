/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGManager, NSDate, NSDateComponents;

@interface PGContextualOptions : NSObject {

	PGManager* _manager;
	NSDate* _localToday;
	NSDateComponents* _localTodayComponents;

}

@property (nonatomic,retain) NSDate * localToday;                                  //@synthesize localToday=_localToday - In the implementation block
@property (nonatomic,retain) NSDateComponents * localTodayComponents;              //@synthesize localTodayComponents=_localTodayComponents - In the implementation block
-(void)setLocalToday:(NSDate *)arg1 ;
-(NSDate *)localToday;
-(id)initWithManager:(id)arg1 options:(id)arg2 ;
-(id)availableContextualRules;
-(NSDateComponents *)localTodayComponents;
-(void)setLocalTodayComponents:(NSDateComponents *)arg1 ;
@end

