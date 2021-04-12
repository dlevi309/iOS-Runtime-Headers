/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGGraphRelatableEvent <PGGraphFullMeaninglessEvent>
@required
+(id)pathFromMoment;
+(id)pathToMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1;
+(id)pathToTargetNodeDomain:(unsigned short)arg1;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
-(double)weightForMoment:(id)arg1;
-(id)photoEvent;
-(id)connectedEventsWithTargetDomain:(unsigned short)arg1;
-(id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;

@end

