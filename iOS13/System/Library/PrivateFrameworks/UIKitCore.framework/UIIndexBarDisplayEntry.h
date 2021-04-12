/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIIndexBarEntry;

@interface UIIndexBarDisplayEntry : NSObject {

	UIIndexBarEntry* _entry;
	long long _entryIndex;
	long long _displayEntryIndex;

}

@property (nonatomic,retain) UIIndexBarEntry * entry;                  //@synthesize entry=_entry - In the implementation block
@property (assign,nonatomic) long long entryIndex;                     //@synthesize entryIndex=_entryIndex - In the implementation block
@property (assign,nonatomic) long long displayEntryIndex;              //@synthesize displayEntryIndex=_displayEntryIndex - In the implementation block
-(id)description;
-(UIIndexBarEntry *)entry;
-(void)setEntry:(UIIndexBarEntry *)arg1 ;
-(long long)entryIndex;
-(void)setEntryIndex:(long long)arg1 ;
-(long long)displayEntryIndex;
-(void)setDisplayEntryIndex:(long long)arg1 ;
@end

