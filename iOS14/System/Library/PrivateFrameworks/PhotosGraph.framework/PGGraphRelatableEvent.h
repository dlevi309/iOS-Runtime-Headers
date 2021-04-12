/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGGraphRelatableEvent <PGGraphFullMeaninglessEvent>
@required
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+(id)pathToTargetNodeDomain:(unsigned short)arg1;
+(id)pathFromMoment;
+(id)pathToMoment;
-(id)photoEvent;
-(double)weightForMoment:(id)arg1;
-(id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;
-(id)connectedEventsWithTargetDomain:(unsigned short)arg1;

@end

