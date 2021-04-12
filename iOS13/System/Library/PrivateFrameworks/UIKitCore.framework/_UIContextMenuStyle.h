/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIWindow, UIView, UITraitCollection, NSArray;

@interface _UIContextMenuStyle : NSObject <NSCopying> {

	BOOL _hasInteractivePreview;
	BOOL _preventPreviewRasterization;
	BOOL _reversesActionOrderWhenAttachedToTop;
	UIWindow* _containerWindow;
	UIView* _containerView;
	unsigned long long _preferredLayout;
	UITraitCollection* _preferredTraitCollection;
	NSArray* _preferredBackgroundEffects;
	UIEdgeInsets _preferredEdgeInsets;
	UIEdgeInsets _preferredBackgroundInsets;

}

@property (nonatomic,retain) UIWindow * containerWindow;                                //@synthesize containerWindow=_containerWindow - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                    //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) unsigned long long preferredLayout;                        //@synthesize preferredLayout=_preferredLayout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredEdgeInsets;                          //@synthesize preferredEdgeInsets=_preferredEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL hasInteractivePreview;                                //@synthesize hasInteractivePreview=_hasInteractivePreview - In the implementation block
@property (assign,nonatomic) BOOL preventPreviewRasterization;                          //@synthesize preventPreviewRasterization=_preventPreviewRasterization - In the implementation block
@property (assign,nonatomic) BOOL reversesActionOrderWhenAttachedToTop;                 //@synthesize reversesActionOrderWhenAttachedToTop=_reversesActionOrderWhenAttachedToTop - In the implementation block
@property (nonatomic,retain) UITraitCollection * preferredTraitCollection;              //@synthesize preferredTraitCollection=_preferredTraitCollection - In the implementation block
@property (nonatomic,retain) NSArray * preferredBackgroundEffects;                      //@synthesize preferredBackgroundEffects=_preferredBackgroundEffects - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredBackgroundInsets;                    //@synthesize preferredBackgroundInsets=_preferredBackgroundInsets - In the implementation block
+(id)defaultStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPreferredLayout:(unsigned long long)arg1 ;
-(UIWindow *)containerWindow;
-(void)setContainerWindow:(UIWindow *)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(unsigned long long)preferredLayout;
-(BOOL)hasInteractivePreview;
-(void)setHasInteractivePreview:(BOOL)arg1 ;
-(BOOL)preventPreviewRasterization;
-(void)setPreventPreviewRasterization:(BOOL)arg1 ;
-(BOOL)reversesActionOrderWhenAttachedToTop;
-(void)setReversesActionOrderWhenAttachedToTop:(BOOL)arg1 ;
-(UIEdgeInsets)preferredEdgeInsets;
-(void)setPreferredEdgeInsets:(UIEdgeInsets)arg1 ;
-(UITraitCollection *)preferredTraitCollection;
-(void)setPreferredTraitCollection:(UITraitCollection *)arg1 ;
-(NSArray *)preferredBackgroundEffects;
-(void)setPreferredBackgroundEffects:(NSArray *)arg1 ;
-(UIEdgeInsets)preferredBackgroundInsets;
-(void)setPreferredBackgroundInsets:(UIEdgeInsets)arg1 ;
@end

