/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSArray, NSDate;

@interface _DKSyncChanges : NSObject {

	NSArray* _additionChangeSets;
	NSArray* _deletionChangeSets;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * additionChangeSets;              //@synthesize additionChangeSets=_additionChangeSets - In the implementation block
@property (nonatomic,readonly) NSArray * deletionChangeSets;              //@synthesize deletionChangeSets=_deletionChangeSets - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)deletionChangeSets;
-(NSArray *)additionChangeSets;
-(id)initWithAdditionChangeSets:(id)arg1 deletionChangeSets:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
@end

