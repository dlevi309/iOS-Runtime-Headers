/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

