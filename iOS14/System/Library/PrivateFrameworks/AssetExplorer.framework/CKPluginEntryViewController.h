/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/


@protocol CKPluginEntryViewController <NSObject>
@property (assign,nonatomic,__weak) id<CKPluginEntryViewControllerDelegate> entryViewDelegate; 
@property (readonly) BOOL wantsClearButton; 
@property (readonly) BOOL wantsEdgeToEdgeLayout; 
@property (readonly) BOOL loadedContentView; 
@optional
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
-(void)willAnimateBoundsChange;

@required
-(CGSize*)sizeThatFits:(CGSize)arg1;

@end

