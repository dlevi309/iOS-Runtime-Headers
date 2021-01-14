/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMapTable, NSArray;

@interface SBSwitcherDisplayItemRemovalResolutionRequest : NSObject {

	NSMapTable* _displayItemToRemovalIntentType;

}

@property (nonatomic,copy,readonly) NSArray * displayItems; 
-(NSArray *)displayItems;
-(long long)removalIntentTypeForDisplayItem:(id)arg1 ;
-(void)setRemovalIntentType:(long long)arg1 forDisplayItem:(id)arg2 ;
@end

