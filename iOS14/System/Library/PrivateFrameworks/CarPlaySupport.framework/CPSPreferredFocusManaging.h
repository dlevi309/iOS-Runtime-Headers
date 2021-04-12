/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

