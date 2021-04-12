/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/


@protocol CKPluginEntryViewController <NSObject>
@property (assign,nonatomic,__weak) id<CKPluginEntryViewControllerDelegate> entryViewDelegate; 
@property (readonly) BOOL wantsClearButton; 
@property (readonly) BOOL wantsEdgeToEdgeLayout; 
@property (readonly) BOOL loadedContentView; 
@optional
-(void)willAnimateBoundsChange;
-(void)performHostAppResume;
-(void)performHostAppSuspend;
-(void)payloadWillSend;
-(void)didFinishAnimatedBoundsChange;
-(id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2;
-(id)payloadBundleID;
-(void)payloadWillClear;
-(void)payloadWillSave;
-(id)framesOfVisibleContentViewInCoordinateSpace:(id)arg1;
-(id<CKPluginEntryViewControllerDelegate>)entryViewDelegate;
-(void)setEntryViewDelegate:(id)arg1;
-(BOOL)wantsClearButton;
-(BOOL)wantsEdgeToEdgeLayout;
-(BOOL)loadedContentView;

@required
-(CGSize*)sizeThatFits:(CGSize)arg1;

@end

