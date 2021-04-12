/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TLKObserver.h>
#import <libobjc.A.dylib/TLKObservable.h>

@protocol TLKObserver;
@class UIView, TLKAppearance, NSString;

@interface TLKView : UIView <TLKObserver, TLKObservable> {

	BOOL inBatchUpdate;
	id<TLKObserver> observer;
	UIView* _contentView;
	TLKAppearance* _tlkAppearance;

}

@property (nonatomic,retain) UIView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) TLKAppearance * tlkAppearance;              //@synthesize tlkAppearance=_tlkAppearance - In the implementation block
@property (readonly) BOOL usesDefaultInsets; 
@property (assign) BOOL inBatchUpdate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<TLKObserver> observer; 
+(Class)layerClass;
+(void)enableShadow:(BOOL)arg1 forView:(id)arg2 ;
+(void)enableLightKeylineStroke:(BOOL)arg1 forView:(id)arg2 ;
+(void)makeContainerShadowCompatible:(id)arg1 ;
+(UIEdgeInsets)defaultInsets;
-(id)init;
-(id<TLKObserver>)observer;
-(void)setObserver:(id<TLKObserver>)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)layoutMarginsDidChange;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(BOOL)inBatchUpdate;
-(void)propertiesDidChange;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(BOOL)usesDefaultInsets;
-(void)setInBatchUpdate:(BOOL)arg1 ;
-(void)disableUnbatchedUpdates;
-(CGSize)containerSizeForSize:(CGSize)arg1 ;
-(TLKAppearance *)tlkAppearance;
-(void)setTlkAppearance:(TLKAppearance *)arg1 ;
@end

