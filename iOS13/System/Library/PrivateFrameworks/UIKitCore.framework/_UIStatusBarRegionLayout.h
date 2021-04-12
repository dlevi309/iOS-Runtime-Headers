/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)invalidate;
-(_UIStatusBarRegion *)region;
-(void)setRegion:(id)arg1;
-(NSArray *)displayItems;
-(void)setDisplayItems:(id)arg1;
-(BOOL)fitsAllItems;

@end

