/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)allowsBackdropGroups;
-(BOOL)matchesAlpha;
-(id)initWithSourceView:(id)arg1 ;
-(void)setMatchesTransform:(BOOL)arg1 ;
-(void)setAllowsHitTesting:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CAPortalLayer *)portalLayer;
-(void)setMatchesPosition:(BOOL)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setAllowsBackdropGroups:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setMatchesAlpha:(BOOL)arg1 ;
-(BOOL)hidesSourceView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidesSourceView:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIView *)sourceView;
-(BOOL)_isGeometryFrozen;
-(void)setForwardsClientHitTestingToSourceView:(BOOL)arg1 ;
-(NSString *)name;
-(BOOL)forwardsClientHitTestingToSourceView;
-(id)description;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(BOOL)allowsHitTesting;
-(void)_setGeometryFrozen:(BOOL)arg1 ;
-(BOOL)matchesTransform;
-(void)setName:(NSString *)arg1 ;
-(BOOL)matchesPosition;
@end

