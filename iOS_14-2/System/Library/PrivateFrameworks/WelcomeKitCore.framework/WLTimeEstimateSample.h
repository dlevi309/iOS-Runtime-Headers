/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@protocol NSObject;
@class NSDate;

@interface WLTimeEstimateSample : NSObject {

	unsigned long long _estimate;
	NSDate* _startDate;
	unsigned long long _threshold;
	id<NSObject> _associatedObject;

}

@property (assign,nonatomic) unsigned long long estimate;                //@synthesize estimate=_estimate - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned long long threshold;               //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,retain) id<NSObject> associatedObject;              //@synthesize associatedObject=_associatedObject - In the implementation block
-(unsigned long long)threshold;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(unsigned long long)estimate;
-(id<NSObject>)associatedObject;
-(void)setThreshold:(unsigned long long)arg1 ;
-(void)setEstimate:(unsigned long long)arg1 ;
-(void)setAssociatedObject:(id<NSObject>)arg1 ;
@end

