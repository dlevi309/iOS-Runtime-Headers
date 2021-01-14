/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class _UIStatusBarRegion, NSArray;


@protocol _UIStatusBarRegionLayout <NSObject>
@property (assign,nonatomic,__weak) _UIStatusBarRegion * region; 
@property (nonatomic,copy) NSArray * displayItems; 
@property (nonatomic,readonly) BOOL fitsAllItems; 
@optional
-(BOOL)mayFitDisplayItems:(id)arg1;

@required
-(void)setDisplayItems:(id)arg1;
-(_UIStatusBarRegion *)region;
-(void)setRegion:(id)arg1;
-(NSArray *)displayItems;
-(void)invalidate;
-(BOOL)fitsAllItems;

@end

