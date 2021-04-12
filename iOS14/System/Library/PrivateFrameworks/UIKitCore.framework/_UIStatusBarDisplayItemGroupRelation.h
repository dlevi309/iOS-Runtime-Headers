/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarDisplayItemRelation.h>

@class NSArray;

@interface _UIStatusBarDisplayItemGroupRelation : _UIStatusBarDisplayItemRelation {

	BOOL _requiresAll;
	NSArray* _relations;

}

@property (nonatomic,retain) NSArray * relations;              //@synthesize relations=_relations - In the implementation block
@property (assign,nonatomic) BOOL requiresAll;                 //@synthesize requiresAll=_requiresAll - In the implementation block
-(NSArray *)relations;
-(BOOL)isFulfilled;
-(id)_ui_descriptionBuilder;
-(id)itemStates;
-(void)setRelations:(NSArray *)arg1 ;
-(void)setRequiresAll:(BOOL)arg1 ;
-(id)type;
-(BOOL)requiresAll;
@end

