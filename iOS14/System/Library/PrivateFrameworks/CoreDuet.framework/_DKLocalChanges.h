/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSArray, NSDate;

@interface _DKLocalChanges : NSObject {

	NSArray* _insertedObjects;
	NSArray* _tombstones;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * insertedObjects;              //@synthesize insertedObjects=_insertedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * tombstones;                   //@synthesize tombstones=_tombstones - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                       //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSArray *)insertedObjects;
-(NSArray *)tombstones;
@end

