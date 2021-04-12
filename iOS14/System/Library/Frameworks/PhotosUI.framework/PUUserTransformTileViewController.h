/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUUserTransformViewDelegate.h>

@protocol PUUserTransformTileViewControllerDelegate;
@class PUAssetReference, PUUserTransformView, PUDisplayTileTransform, NSString;

@interface PUUserTransformTileViewController : PUTileViewController <PUUserTransformViewDelegate> {

	struct {
		BOOL respondsToDidChangeModelTileTransform;
		BOOL respondsToDidChangeIsUserInteracting;
		BOOL respondsToShouldReceiveTouchAtLocationFromProvider;
	}  _delegateFlags;
	BOOL _userInteractionEnabled;
	id<PUUserTransformTileViewControllerDelegate> _delegate;
	PUAssetReference* _assetReference;
	PUUserTransformView* _userTransformView;
	PUDisplayTileTransform* _displayTileTransform;
	NSString* __identifier;
	CGRect __untransformedContentFrame;

}

@property (setter=_setUserTransformView:,nonatomic,retain) PUUserTransformView * userTransformView;                //@synthesize userTransformView=_userTransformView - In the implementation block
@property (assign,setter=_setUntransformedContentFrame:,nonatomic) CGRect _untransformedContentFrame;              //@synthesize _untransformedContentFrame=__untransformedContentFrame - In the implementation block
@property (setter=_setIdentifier:,nonatomic,copy) NSString * _identifier;                                          //@synthesize _identifier=__identifier - In the implementation block
@property (nonatomic,retain) PUDisplayTileTransform * displayTileTransform;                                        //@synthesize displayTileTransform=_displayTileTransform - In the implementation block
@property (assign,nonatomic,__weak) id<PUUserTransformTileViewControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PUAssetReference * assetReference;                                                    //@synthesize assetReference=_assetReference - In the implementation block
@property (assign,setter=setUserInteractionEnabled:,nonatomic) BOOL userInteractionEnabled;                        //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAssetReference:(PUAssetReference *)arg1 ;
-(void)becomeReusable;
-(PUDisplayTileTransform *)displayTileTransform;
-(void)_setUntransformedContentFrame:(CGRect)arg1 ;
-(void)_setUserTransformView:(id)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id<PUUserTransformTileViewControllerDelegate>)delegate;
-(void)_updateUserTransformPadding;
-(BOOL)userTransformView:(id)arg1 shouldReceiveTouchAtPoint:(CGPoint)arg2 ;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)didChangeAnimating;
-(void)setDelegate:(id<PUUserTransformTileViewControllerDelegate>)arg1 ;
-(BOOL)userInteractionEnabled;
-(CGRect)_untransformedContentFrame;
-(void)setDisplayTileTransform:(PUDisplayTileTransform *)arg1 ;
-(NSString *)_identifier;
-(PUUserTransformView *)userTransformView;
-(id)_userInputOriginIdentifier;
-(void)_updateUserInteractionEnabled;
-(void)userTransformView:(id)arg1 didChangeUserAffineTransform:(CGAffineTransform)arg2 isUserInteracting:(BOOL)arg3 ;
-(void)_updateUserTransformView;
-(void)userTransformView:(id)arg1 didChangeIsUserInteracting:(BOOL)arg2 ;
-(void)_setIdentifier:(id)arg1 ;
-(PUAssetReference *)assetReference;
-(id)loadView;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)dealloc;
@end

