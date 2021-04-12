/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
*/


@class NSString, NSDate, NSDictionary;

@interface SQPool : NSObject {

	NSString* _poolID;
	NSString* _poolName;
	NSString* _poolDescription;
	NSDate* _targetDate;
	NSString* _regionID;

}

@property (nonatomic,copy) NSString * poolID;                                             //@synthesize poolID=_poolID - In the implementation block
@property (nonatomic,copy) NSString * poolName;                                           //@synthesize poolName=_poolName - In the implementation block
@property (nonatomic,copy) NSString * poolDescription;                                    //@synthesize poolDescription=_poolDescription - In the implementation block
@property (nonatomic,retain) NSDate * targetDate;                                         //@synthesize targetDate=_targetDate - In the implementation block
@property (nonatomic,copy) NSString * regionID;                                           //@synthesize regionID=_regionID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(id)dateFormatter;
+(id)poolWithRegionID:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setRegionID:(NSString *)arg1 ;
-(NSString *)poolID;
-(NSString *)regionID;
-(void)setTargetDate:(NSDate *)arg1 ;
-(NSDate *)targetDate;
-(NSString *)poolName;
-(NSString *)poolDescription;
-(void)setPoolID:(NSString *)arg1 ;
-(void)setPoolName:(NSString *)arg1 ;
-(void)setPoolDescription:(NSString *)arg1 ;
@end

