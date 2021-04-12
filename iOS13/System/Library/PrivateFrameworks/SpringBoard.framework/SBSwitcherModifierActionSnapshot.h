/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSArray;

@interface SBSwitcherModifierActionSnapshot : NSObject {

	NSArray* _actionNames;
	NSArray* _actionDescriptions;

}

@property (nonatomic,retain) NSArray * actionNames;                     //@synthesize actionNames=_actionNames - In the implementation block
@property (nonatomic,retain) NSArray * actionDescriptions;              //@synthesize actionDescriptions=_actionDescriptions - In the implementation block
-(NSArray *)actionNames;
-(NSArray *)actionDescriptions;
-(void)setActionNames:(NSArray *)arg1 ;
-(void)setActionDescriptions:(NSArray *)arg1 ;
@end

