/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSMutableArray;

@interface MNDurationRequest : NSObject {

	NSMutableArray* completions;
	double startTime;

}

@property (nonatomic,retain) NSMutableArray * completions; 
@property (assign,nonatomic) double startTime; 
-(id)init;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
@end

