/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)startDate;
-(unsigned long long)threshold;
-(void)setThreshold:(unsigned long long)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(unsigned long long)estimate;
-(id<NSObject>)associatedObject;
-(void)setEstimate:(unsigned long long)arg1 ;
-(void)setAssociatedObject:(id<NSObject>)arg1 ;
@end

