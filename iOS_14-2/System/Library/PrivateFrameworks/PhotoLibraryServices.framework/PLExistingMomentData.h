/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDateInterval *)dateInterval;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSObject*<NSCopying>)objectID;
-(id)initWithMoment:(id)arg1 ;
-(unsigned long long)hash;
-(void)registerAsset:(id)arg1 ;
-(unsigned long long)numberOfAssets;
-(BOOL)isEqual:(id)arg1 ;
@end

