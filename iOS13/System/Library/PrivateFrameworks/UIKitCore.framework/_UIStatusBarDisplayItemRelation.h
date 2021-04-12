/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface _UIStatusBarDisplayItemRelation : NSObject

@property (getter=isFulfilled,nonatomic,readonly) BOOL fulfilled; 
@property (nonatomic,readonly) NSArray * itemStates; 
+(id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2 ;
+(id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2 ;
+(id)anyRelationWithRelations:(id)arg1 ;
+(id)allRelationWithRelations:(id)arg1 ;
-(id)description;
-(id)type;
-(id)_ui_descriptionBuilder;
-(BOOL)isFulfilled;
-(NSArray *)itemStates;
@end

