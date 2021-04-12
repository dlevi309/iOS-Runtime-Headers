/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSArray, NSIndexSet;


@protocol MSPContainerEditReplacement <MSPContainerEdit>
@property (nonatomic,readonly) NSArray * originalImmutableObjects; 
@property (nonatomic,readonly) NSArray * replacementImmutableObjects; 
@property (nonatomic,readonly) NSIndexSet * indexesOfReplacedObjects; 
@required
-(NSArray *)originalImmutableObjects;
-(NSArray *)replacementImmutableObjects;
-(NSIndexSet *)indexesOfReplacedObjects;

@end

