/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol NSCopying;
@class NSObject, NSDate, NSDateInterval;

@interface PLExistingMomentData : NSObject {

	NSObject*<NSCopying> _objectID;
	unsigned long long _numberOfAssets;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,readonly) NSObject*<NSCopying> objectID;                  //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAssets;              //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;                  //@synthesize dateInterval=_dateInterval - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSObject*<NSCopying>)objectID;
-(NSDateInterval *)dateInterval;
-(unsigned long long)numberOfAssets;
-(id)initWithMoment:(id)arg1 ;
-(void)registerAsset:(id)arg1 ;
@end

