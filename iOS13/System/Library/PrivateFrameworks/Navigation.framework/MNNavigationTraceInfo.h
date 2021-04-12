/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSString;

@interface MNNavigationTraceInfo : NSObject {

	NSString* _pedestrianTracePath;
	double _pedestrianTraceStartRelativeTimestamp;

}

@property (nonatomic,copy) NSString * pedestrianTracePath;                              //@synthesize pedestrianTracePath=_pedestrianTracePath - In the implementation block
@property (assign,nonatomic) double pedestrianTraceStartRelativeTimestamp;              //@synthesize pedestrianTraceStartRelativeTimestamp=_pedestrianTraceStartRelativeTimestamp - In the implementation block
-(void)setPedestrianTracePath:(NSString *)arg1 ;
-(void)setPedestrianTraceStartRelativeTimestamp:(double)arg1 ;
-(NSString *)pedestrianTracePath;
-(double)pedestrianTraceStartRelativeTimestamp;
@end

