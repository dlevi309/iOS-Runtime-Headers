/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class NSSet;


@protocol HUQuickControlItemHosting <NSObject>
@property (nonatomic,readonly) id<HUQuickControlItemUpdating> itemUpdater; 
@property (nonatomic,copy,readonly) NSSet * controlItems; 
@property (assign,getter=areControlsVisible,nonatomic) BOOL controlsVisible; 
@required
-(id<HUQuickControlItemUpdating>)itemUpdater;
-(NSSet *)controlItems;
-(void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
-(BOOL)areControlsVisible;
-(void)setControlsVisible:(BOOL)arg1;

@end

