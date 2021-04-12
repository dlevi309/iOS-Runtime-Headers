/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTipKitCollectionViewCell.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class NSArray, CAPackage, CALayer, CAStateController, UIView, NSMutableArray, NSString;

@interface CKTipKitOnboardingCollectionViewCell : CKTipKitCollectionViewCell <CNAvatarViewDelegate> {

	NSArray* _recommendedPinningConversations;
	CAPackage* _package;
	CALayer* _packageLayer;
	CAStateController* _stateController;
	long long _state;
	UIView* _micaView;
	NSArray* _layerNames;
	NSMutableArray* _avatarViews;

}

@property (nonatomic,retain) NSArray * recommendedPinningConversations;              //@synthesize recommendedPinningConversations=_recommendedPinningConversations - In the implementation block
@property (nonatomic,retain) CAPackage * package;                                    //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CALayer * packageLayer;                                 //@synthesize packageLayer=_packageLayer - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;                    //@synthesize stateController=_stateController - In the implementation block
@property (assign,nonatomic) long long state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIView * micaView;                                      //@synthesize micaView=_micaView - In the implementation block
@property (nonatomic,retain) NSArray * layerNames;                                   //@synthesize layerNames=_layerNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * avatarViews;                           //@synthesize avatarViews=_avatarViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)stopAnimations;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)setPackage:(CAPackage *)arg1 ;
-(CAStateController *)stateController;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)micaView;
-(void)resetViews;
-(NSArray *)recommendedPinningConversations;
-(NSArray *)layerNames;
-(NSMutableArray *)avatarViews;
-(void)startAnimations;
-(void)setMicaView:(UIView *)arg1 ;
-(CALayer *)packageLayer;
-(void)stepThroughOnboardingTipAnimationForLayer:(id)arg1 ;
-(void)setRecommendedPinningConversations:(NSArray *)arg1 ;
-(void)updateTipAnimationIfNeeded;
-(void)setPackageLayer:(CALayer *)arg1 ;
-(void)willDisplayCell;
-(void)setLayerNames:(NSArray *)arg1 ;
-(void)setAvatarViews:(NSMutableArray *)arg1 ;
-(void)prepareForReuse;
-(void)didEndDisplaying;
-(void)didUpdateContentForAvatarView:(id)arg1 ;
-(CAPackage *)package;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setTipContentView:(id)arg1 withRecommenedPinningConversations:(id)arg2 ;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)dealloc;
@end

