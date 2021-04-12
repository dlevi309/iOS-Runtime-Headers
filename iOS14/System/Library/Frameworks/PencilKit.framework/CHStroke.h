/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol CHStroke <NSObject>
@property (nonatomic,retain,readonly) id<CHStrokeIdentifier> strokeIdentifier; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long strokeAttributes; 
@property (nonatomic,readonly) double startTimestamp; 
@property (nonatomic,readonly) double endTimestamp; 
@required
-(CGRect)bounds;
-(double)startTimestamp;
-(double)endTimestamp;
-(id<CHStrokeIdentifier>)strokeIdentifier;
-(void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(/*^block*/id)arg2;
-(id)encodedStrokeIdentifier;
-(unsigned long long)strokeAttributes;

@end

