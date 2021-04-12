/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSDate, CLLocation, NSArray, PGManager;

@interface PGFeatureVectorGenerator : NSObject {

	BOOL _isDryTesting;
	NSDate* _localDate;
	CLLocation* _location;
	NSArray* _peopleNames;
	PGManager* _manager;

}

@property (assign) BOOL isDryTesting;                            //@synthesize isDryTesting=_isDryTesting - In the implementation block
@property (nonatomic,retain) NSDate * localDate;                 //@synthesize localDate=_localDate - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSArray * peopleNames;                //@synthesize peopleNames=_peopleNames - In the implementation block
@property (__weak,readonly) PGManager * manager;                 //@synthesize manager=_manager - In the implementation block
+(id)_calendarEventsBetweenDate:(id)arg1 andDate:(id)arg2 atLocation:(id)arg3 withPeopleUUIDs:(id)arg4 inPhotoLibrary:(id)arg5 ;
-(id)initWithManager:(id)arg1 ;
-(void)setIsDryTesting:(BOOL)arg1 ;
-(CLLocation *)location;
-(NSDate *)localDate;
-(BOOL)isDryTesting;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSArray *)peopleNames;
-(void)setLocation:(CLLocation *)arg1 ;
-(PGManager *)manager;
-(void)setLocalDate:(NSDate *)arg1 ;
-(void)enumerateFeatureVectorsByTypeUsingBlock:(/*^block*/id)arg1 ;
@end

