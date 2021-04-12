/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKMacToolbarItemProvider <NSObject>
@optional
-(id)virtualView;
-(BOOL)reparentToolbarItem:(id)arg1;
-(BOOL)prefersBottomDividerHidden;
-(double)virtualToolbarPreferredHeight;
-(UIEdgeInsets*)virtualToolbarContentInsets;
-(void)toolbarWillAddItem:(id)arg1;
-(void)toolbarDidRemoveItem:(id)arg1;
-(BOOL)itemProviderDisablesTouches;

@required
-(id)toolbarItemForIdentifier:(id)arg1;
-(void)providerWillBeRemovedFromToolbarController:(id)arg1;
-(void)configureWithToolbarController:(id)arg1;

@end

