/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol CHStroke <NSObject>
@property (nonatomic,retain,readonly) id<CHStrokeIdentifier> strokeIdentifier; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) double startTimestamp; 
@property (nonatomic,readonly) double endTimestamp; 
@required
-(CGRect)bounds;
-(double)startTimestamp;
-(double)endTimestamp;
-(void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(/*^block*/id)arg2;
-(id<CHStrokeIdentifier>)strokeIdentifier;

@end

