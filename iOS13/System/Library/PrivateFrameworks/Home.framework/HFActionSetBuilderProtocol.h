/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class NSArray, HFMediaPlaybackActionBuilder;


@protocol HFActionSetBuilderProtocol <NSObject>
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
@property (getter=isAffectedByEndEvents,nonatomic,readonly) BOOL affectedByEndEvents; 
@property (nonatomic,readonly) HFMediaPlaybackActionBuilder * mediaAction; 
@required
-(void)removeAllActions;
-(void)addAction:(id)arg1;
-(NSArray *)actions;
-(BOOL)requiresDeviceUnlock;
-(void)removeAction:(id)arg1;
-(BOOL)isAffectedByEndEvents;
-(void)updateAction:(id)arg1;
-(id)deleteActionSet;
-(HFMediaPlaybackActionBuilder *)mediaAction;

@end

