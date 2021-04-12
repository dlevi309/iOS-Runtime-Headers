/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSString, CAPortalLayer;

@interface _UIPortalView : UIView {

	BOOL _forwardsClientHitTestingToSourceView;
	BOOL __geometryFrozen;
	UIView* _sourceView;
	NSString* _name;

}

@property (assign,setter=_setGeometryFrozen:,getter=_isGeometryFrozen,nonatomic) BOOL _geometryFrozen;              //@synthesize _geometryFrozen=__geometryFrozen - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                                            //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hidesSourceView; 
@property (assign,nonatomic) BOOL matchesAlpha; 
@property (assign,nonatomic) BOOL matchesTransform; 
@property (assign,nonatomic) BOOL matchesPosition; 
@property (assign,nonatomic) BOOL allowsBackdropGroups; 
@property (assign,nonatomic) BOOL allowsHitTesting; 
@property (assign,nonatomic) BOOL forwardsClientHitTestingToSourceView;                                             //@synthesize forwardsClientHitTestingToSourceView=_forwardsClientHitTestingToSourceView - In the implementation block
@property (nonatomic,readonly) CAPortalLayer * portalLayer; 
+(Class)layerClass;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setAllowsBackdropGroups:(BOOL)arg1 ;
-(void)setAllowsHitTesting:(BOOL)arg1 ;
-(void)setHidesSourceView:(BOOL)arg1 ;
-(BOOL)hidesSourceView;
-(void)setMatchesAlpha:(BOOL)arg1 ;
-(void)setMatchesPosition:(BOOL)arg1 ;
-(void)setMatchesTransform:(BOOL)arg1 ;
-(CAPortalLayer *)portalLayer;
-(void)_setGeometryFrozen:(BOOL)arg1 ;
-(id)initWithSourceView:(id)arg1 ;
-(BOOL)matchesTransform;
-(BOOL)matchesPosition;
-(BOOL)allowsBackdropGroups;
-(BOOL)allowsHitTesting;
-(BOOL)forwardsClientHitTestingToSourceView;
-(BOOL)matchesAlpha;
-(BOOL)_isGeometryFrozen;
-(void)setForwardsClientHitTestingToSourceView:(BOOL)arg1 ;
@end

