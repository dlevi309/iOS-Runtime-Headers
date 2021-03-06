/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBFluidSwitcherItemContainer.h>
#import <libobjc.A.dylib/SBReusableView.h>

@class SBAppLayout, NSString;

@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer <SBReusableView> {

	SBAppLayout* _snapshotAppLayout;

}

@property (nonatomic,retain) SBAppLayout * snapshotAppLayout;              //@synthesize snapshotAppLayout=_snapshotAppLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(void)setContentView:(id)arg1 ;
-(id)_snapshotView;
-(void)setSnapshotAppLayout:(SBAppLayout *)arg1 ;
-(SBAppLayout *)snapshotAppLayout;
@end

