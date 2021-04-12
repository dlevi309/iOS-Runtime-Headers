/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@protocol CPSPreferredFocusManaging
@property (assign,nonatomic,__weak) id<UIFocusItem> preferredFocusItem; 
@property (assign,nonatomic) BOOL usePreferredItemOnNextUpdate; 
@required
-(BOOL)usePreferredItemOnNextUpdate;
-(void)setUsePreferredItemOnNextUpdate:(BOOL)arg1;
-(id<UIFocusItem>)preferredFocusItem;
-(void)setPreferredFocusItem:(id)arg1;

@end

