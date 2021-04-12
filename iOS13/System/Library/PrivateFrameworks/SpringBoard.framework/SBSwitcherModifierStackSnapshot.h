/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString, SBSwitcherModifierQuerySnapshot, NSArray;

@interface SBSwitcherModifierStackSnapshot : NSObject {

	NSString* _modifierName;
	SBSwitcherModifierQuerySnapshot* _querySnapshot;
	NSArray* _childSnapshots;

}

@property (nonatomic,retain) NSString * modifierName;                                      //@synthesize modifierName=_modifierName - In the implementation block
@property (nonatomic,retain) SBSwitcherModifierQuerySnapshot * querySnapshot;              //@synthesize querySnapshot=_querySnapshot - In the implementation block
@property (nonatomic,retain) NSArray * childSnapshots;                                     //@synthesize childSnapshots=_childSnapshots - In the implementation block
-(NSString *)modifierName;
-(NSArray *)childSnapshots;
-(void)enumerateModifierSnapshots:(/*^block*/id)arg1 ;
-(SBSwitcherModifierQuerySnapshot *)querySnapshot;
-(void)setModifierName:(NSString *)arg1 ;
-(void)setQuerySnapshot:(SBSwitcherModifierQuerySnapshot *)arg1 ;
-(void)setChildSnapshots:(NSArray *)arg1 ;
-(void)_enumerateModifierSnapshots:(/*^block*/id)arg1 stop:(BOOL*)arg2 ;
@end

