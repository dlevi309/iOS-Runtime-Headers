/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)type;
-(id)_ui_descriptionBuilder;
-(BOOL)isFulfilled;
-(NSArray *)relations;
-(void)setRelations:(NSArray *)arg1 ;
-(id)itemStates;
-(void)setRequiresAll:(BOOL)arg1 ;
-(BOOL)requiresAll;
@end

