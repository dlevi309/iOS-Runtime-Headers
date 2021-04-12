/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIView.h>

@class UIView, CAPortalLayer;

@interface SBPortalView : UIView {

	UIView* _sourceView;

}

@property (assign,nonatomic,__weak) UIView * sourceView;                 //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) BOOL hidesSourceView; 
@property (assign,nonatomic) BOOL matchesAlpha; 
@property (assign,nonatomic) BOOL matchesTransform; 
@property (assign,nonatomic) BOOL matchesPosition; 
@property (assign,nonatomic) BOOL allowsBackdropGroups; 
@property (nonatomic,readonly) CAPortalLayer * portalLayer; 
+(Class)layerClass;
-(id)description;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setAllowsBackdropGroups:(BOOL)arg1 ;
-(void)setHidesSourceView:(BOOL)arg1 ;
-(BOOL)hidesSourceView;
-(void)setMatchesAlpha:(BOOL)arg1 ;
-(void)setMatchesPosition:(BOOL)arg1 ;
-(void)setMatchesTransform:(BOOL)arg1 ;
-(CAPortalLayer *)portalLayer;
-(BOOL)matchesTransform;
-(BOOL)matchesPosition;
-(BOOL)allowsBackdropGroups;
-(BOOL)matchesAlpha;
@end

