/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class NSSet;


@protocol HUQuickControlItemHosting <NSObject>
@property (nonatomic,readonly) id<HUQuickControlItemUpdating> itemUpdater; 
@property (nonatomic,copy,readonly) NSSet * controlItems; 
@property (assign,getter=areControlsVisible,nonatomic) BOOL controlsVisible; 
@required
-(void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
-(BOOL)areControlsVisible;
-(void)setControlsVisible:(BOOL)arg1;
-(NSSet *)controlItems;
-(id<HUQuickControlItemUpdating>)itemUpdater;

@end

