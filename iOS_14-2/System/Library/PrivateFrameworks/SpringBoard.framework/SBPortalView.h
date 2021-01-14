/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)allowsBackdropGroups;
-(BOOL)matchesAlpha;
-(void)setMatchesTransform:(BOOL)arg1 ;
-(CAPortalLayer *)portalLayer;
-(void)setMatchesPosition:(BOOL)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setAllowsBackdropGroups:(BOOL)arg1 ;
-(void)setMatchesAlpha:(BOOL)arg1 ;
-(BOOL)hidesSourceView;
-(void)setHidesSourceView:(BOOL)arg1 ;
-(UIView *)sourceView;
-(id)description;
-(BOOL)matchesTransform;
-(BOOL)matchesPosition;
@end

