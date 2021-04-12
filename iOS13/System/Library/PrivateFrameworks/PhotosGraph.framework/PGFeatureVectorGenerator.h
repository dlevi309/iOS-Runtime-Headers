/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(PGManager *)manager;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSArray *)peopleNames;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSDate *)localDate;
-(void)setLocalDate:(NSDate *)arg1 ;
-(void)enumerateFeatureVectorsByTypeUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isDryTesting;
-(void)setIsDryTesting:(BOOL)arg1 ;
@end

