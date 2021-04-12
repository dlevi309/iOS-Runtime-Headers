/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithManager:(id)arg1 options:(id)arg2 ;
-(id)availableContextualRules;
-(NSDate *)localToday;
-(void)setLocalToday:(NSDate *)arg1 ;
-(NSDateComponents *)localTodayComponents;
-(void)setLocalTodayComponents:(NSDateComponents *)arg1 ;
@end

