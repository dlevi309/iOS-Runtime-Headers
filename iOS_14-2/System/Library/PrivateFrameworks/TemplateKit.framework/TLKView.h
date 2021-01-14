/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TLKObserver.h>
#import <libobjc.A.dylib/TLKObservable.h>

@protocol TLKObserver;
@class UIView, TLKAppearance, NSString;

@interface TLKView : UIView <TLKObserver, TLKObservable> {

	id<TLKObserver> observer;
	long long batchUpdateCount;
	UIView* _leadingTextView;
	UIView* _contentView;
	TLKAppearance* _tlkAppearance;

}

@property (readonly) UIView * leadingTextView;                           //@synthesize leadingTextView=_leadingTextView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) TLKAppearance * tlkAppearance;              //@synthesize tlkAppearance=_tlkAppearance - In the implementation block
@property (readonly) BOOL usesDefaultLayoutMargins; 
@property (assign,nonatomic) long long batchUpdateCount; 
@property (__weak) id<TLKObserver> observer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
+(void)makeContainerShadowCompatible:(id)arg1 ;
+(void)enableLightKeylineStroke:(BOOL)arg1 forView:(id)arg2 ;
+(void)enableShadow:(BOOL)arg1 forView:(id)arg2 ;
+(UIEdgeInsets)defaultLayoutMargins;
-(void)layoutMarginsDidChange;
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(void)setObserver:(id<TLKObserver>)arg1 ;
-(id)init;
-(id<TLKObserver>)observer;
-(id)viewForFirstBaselineLayout;
-(void)disableUnbatchedUpdates;
-(UIEdgeInsets)defaultBaselineRelativeLayoutMargins;
-(TLKAppearance *)tlkAppearance;
-(void)setTlkAppearance:(TLKAppearance *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(long long)batchUpdateCount;
-(void)setBatchUpdateCount:(long long)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(UIEdgeInsets)effectiveLayoutMargins;
-(void)propertiesDidChange;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(UIView *)contentView;
-(BOOL)usesDefaultLayoutMargins;
-(UIView *)leadingTextView;
@end

