/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSMutableArray;

@interface MNDurationRequest : NSObject {

	NSMutableArray* completions;
	double startTime;
	unsigned long long _intervalIdentifier;

}

@property (nonatomic,retain) NSMutableArray * completions; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) unsigned long long intervalIdentifier;              //@synthesize intervalIdentifier=_intervalIdentifier - In the implementation block
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(unsigned long long)intervalIdentifier;
-(void)setIntervalIdentifier:(unsigned long long)arg1 ;
@end

