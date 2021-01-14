/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSArray *)additionChangeSets;
-(NSArray *)deletionChangeSets;
@end

