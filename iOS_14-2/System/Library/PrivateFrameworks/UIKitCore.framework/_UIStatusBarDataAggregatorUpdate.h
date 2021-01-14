/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

