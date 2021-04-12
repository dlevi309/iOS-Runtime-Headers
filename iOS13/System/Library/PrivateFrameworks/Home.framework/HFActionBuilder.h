/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>

@class HMAction;

@interface HFActionBuilder : HFItemBuilder

@property (nonatomic,readonly) HMAction * action; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
@property (getter=isAffectedByEndEvents,nonatomic,readonly) BOOL affectedByEndEvents; 
+(id)actionBuilderForAction:(id)arg1 inHome:(id)arg2 ;
+(Class)homeKitRepresentationClass;
-(HMAction *)action;
-(void)setAction:(HMAction *)arg1 ;
-(BOOL)requiresDeviceUnlock;
-(id)createNewAction;
-(BOOL)updateWithActionBuilder:(id)arg1 ;
-(BOOL)isAffectedByEndEvents;
-(id)copyForCreatingNewAction;
-(id)getOrCreateAction;
-(BOOL)isEquivalentToAction:(id)arg1 ;
-(BOOL)hasSameTargetAsAction:(id)arg1 ;
-(id)performValidation;
@end

