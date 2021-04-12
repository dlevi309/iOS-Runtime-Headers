/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSDate;

@interface PXContextualMemoriesOptions : NSObject {

	double _accuracy;
	NSDate* _peopleProximityDate;

}

@property (assign,nonatomic) double accuracy;                           //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,retain) NSDate * peopleProximityDate;              //@synthesize peopleProximityDate=_peopleProximityDate - In the implementation block
-(id)init;
-(void)setAccuracy:(double)arg1 ;
-(NSDate *)peopleProximityDate;
-(void)setPeopleProximityDate:(NSDate *)arg1 ;
-(double)accuracy;
@end

