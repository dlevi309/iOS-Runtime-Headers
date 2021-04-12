/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIStatusBarDataEntry;

@interface _UIStatusBarDataAggregatorUpdate : NSObject {

	BOOL _animated;
	_UIStatusBarDataEntry* _entry;

}

@property (nonatomic,retain) _UIStatusBarDataEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (assign,nonatomic) BOOL animated;                              //@synthesize animated=_animated - In the implementation block
+(id)updateWithEntry:(id)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(_UIStatusBarDataEntry *)entry;
-(void)setEntry:(_UIStatusBarDataEntry *)arg1 ;
@end

