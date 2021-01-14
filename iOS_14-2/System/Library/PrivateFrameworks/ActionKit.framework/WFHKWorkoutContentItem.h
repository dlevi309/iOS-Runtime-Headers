/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@interface WFHKWorkoutContentItem : WFContentItem <WFContentItemClass>
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)itemWithWorkout:(id)arg1 ;
+(id)itemWithWorkout:(id)arg1 distanceUnit:(id)arg2 caloriesUnit:(id)arg3 ;
-(id)workout;
-(id)sourceName;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(id)readableActivityType;
-(id)workoutContainer;
@end

