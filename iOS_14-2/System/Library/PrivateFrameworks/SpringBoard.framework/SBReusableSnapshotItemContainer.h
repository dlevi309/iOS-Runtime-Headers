/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFluidSwitcherItemContainer.h>
#import <libobjc.A.dylib/SBFluidSwitcherItemContainerReusable.h>

@class NSString;

@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer <SBFluidSwitcherItemContainerReusable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_snapshotView;
-(void)setAppLayout:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 appLayout:(id)arg2 delegate:(id)arg3 active:(BOOL)arg4 ;
-(void)prepareForReuse;
-(void)conformsToProtocolSBFluidSwitcherItemContainerReusable;
-(void)setContentView:(id)arg1 ;
-(void)_updateSnapshotViewWithAppLayout:(id)arg1 ;
@end

