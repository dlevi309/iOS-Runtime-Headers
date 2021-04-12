/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(NSString *)headerTitle;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)setTag:(long long)arg1 ;
-(unsigned long long)numberOfRows;
-(long long)tag;
-(NSArray *)items;
-(id)description;
-(id)initWithTag:(long long)arg1 headerTitle:(id)arg2 ;
-(BOOL)hasSubitemForIndexPathRow:(unsigned long long)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 subitemIndex:(unsigned long long*)arg2 ;
-(void)updateCellLayoutsForRowCountIfNeededUsingWidth:(double)arg1 ;
-(void)setHeaderTitle:(NSString *)arg1 ;
@end

