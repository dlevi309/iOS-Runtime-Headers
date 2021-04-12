/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface _UIStatusBarDisplayItemRelation : NSObject

@property (getter=isFulfilled,nonatomic,readonly) BOOL fulfilled; 
@property (nonatomic,readonly) NSArray * itemStates; 
+(id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2 ;
+(id)anyRelationWithRelations:(id)arg1 ;
+(id)allRelationWithRelations:(id)arg1 ;
+(id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2 ;
-(BOOL)isFulfilled;
-(id)_ui_descriptionBuilder;
-(NSArray *)itemStates;
-(id)description;
-(id)type;
@end

