/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

