/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSArray, NSString;

@interface EKEventDetailGroup : NSObject {

	long long _tag;
	NSArray* _items;
	NSString* _headerTitle;

}

@property (assign,nonatomic) long long tag;                       //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * headerTitle;              //@synthesize headerTitle=_headerTitle - In the implementation block
-(id)description;
-(long long)tag;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(unsigned long long)numberOfRows;
-(void)setTag:(long long)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)itemAtIndex:(unsigned long long)arg1 subitemIndex:(unsigned long long*)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2 ;
-(id)initWithTag:(long long)arg1 headerTitle:(id)arg2 ;
-(BOOL)hasSubitemForIndexPathRow:(unsigned long long)arg1 ;
-(void)updateCellLayoutsForRowCountIfNeededUsingWidth:(double)arg1 ;
@end

