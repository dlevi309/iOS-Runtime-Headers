/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)insertedObjects;
-(NSArray *)tombstones;
-(id)initWithInsertedObjects:(id)arg1 tombstones:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
@end

