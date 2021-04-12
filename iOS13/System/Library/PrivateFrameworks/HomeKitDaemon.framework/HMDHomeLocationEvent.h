/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSArray, CLLocation, NSString;

@interface HMDHomeLocationEvent : HMDLogEvent <HMDAWDLogEvent> {

	NSArray* _tuples;
	CLLocation* _selectedHomeLocation;
	unsigned long long _numOfIterations;
	CLLocation* _nearestLOI;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * tuples;                                  //@synthesize tuples=_tuples - In the implementation block
@property (nonatomic,retain) CLLocation * selectedHomeLocation;               //@synthesize selectedHomeLocation=_selectedHomeLocation - In the implementation block
@property (assign,nonatomic) unsigned long long numOfIterations;              //@synthesize numOfIterations=_numOfIterations - In the implementation block
@property (nonatomic,retain) CLLocation * nearestLOI;                         //@synthesize nearestLOI=_nearestLOI - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)eventWithLocationTuples:(id)arg1 selectedHomeLocation:(id)arg2 numberOfIterations:(unsigned long long)arg3 nearestLOI:(id)arg4 ;
-(NSArray *)tuples;
-(void)setTuples:(NSArray *)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(CLLocation *)selectedHomeLocation;
-(void)setSelectedHomeLocation:(CLLocation *)arg1 ;
-(id)awdLocationFromLocationTuple:(id)arg1 ;
-(unsigned long long)numOfIterations;
-(CLLocation *)nearestLOI;
-(void)setNearestLOI:(CLLocation *)arg1 ;
-(void)setNumOfIterations:(unsigned long long)arg1 ;
@end

