/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDMatchingAlgorithmMatch
@property (nonatomic,readonly) long long matchCost; 
@property (nonatomic,readonly) id incomingMatchObject; 
@property (nonatomic,readonly) id outgoingMatchObject; 
@required
-(long long)matchCost;
-(long long)compareToMatch:(id)arg1;
-(BOOL)conflictsWithMatch:(id)arg1;
-(id)incomingMatchObject;
-(id)outgoingMatchObject;

@end

