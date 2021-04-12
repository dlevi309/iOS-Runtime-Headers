/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIIndexBarEntry *)entry;
-(id)description;
-(void)setEntry:(UIIndexBarEntry *)arg1 ;
-(long long)entryIndex;
-(void)setEntryIndex:(long long)arg1 ;
-(long long)displayEntryIndex;
-(void)setDisplayEntryIndex:(long long)arg1 ;
@end

