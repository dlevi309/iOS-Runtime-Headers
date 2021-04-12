/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@class UIView, NSLayoutConstraint, PKAccessoryView, NSString;

@interface PKPaletteContainerView : UIView <PKEdgeLocatable, PKPaletteViewSizeScaling> {

	unsigned long long _edgeLocation;
	double _scalingFactor;
	UIView* _contentView;
	NSLayoutConstraint* _contentViewTopConstraint;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSLayoutConstraint* _contentViewLeftConstraint;
	NSLayoutConstraint* _contentViewRightConstraint;
	PKAccessoryView* _accessoryView;
	NSLayoutConstraint* _accessoryViewTopConstraint;
	NSLayoutConstraint* _accessoryViewBottomConstraint;
	NSLayoutConstraint* _accessoryViewLeftConstraint;
	NSLayoutConstraint* _accessoryViewRightConstraint;
	NSLayoutConstraint* _accessoryViewWidthConstraint;
	NSLayoutConstraint* _accessoryViewHeightConstraint;

}

@property (nonatomic,retain) UIView * contentView;                                            //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewTopConstraint;                   //@synthesize contentViewTopConstraint=_contentViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;                //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewLeftConstraint;                  //@synthesize contentViewLeftConstraint=_contentViewLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewRightConstraint;                 //@synthesize contentViewRightConstraint=_contentViewRightConstraint - In the implementation block
@property (nonatomic,retain) PKAccessoryView * accessoryView;                                 //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewTopConstraint;                 //@synthesize accessoryViewTopConstraint=_accessoryViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewBottomConstraint;              //@synthesize accessoryViewBottomConstraint=_accessoryViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewLeftConstraint;                //@synthesize accessoryViewLeftConstraint=_accessoryViewLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewRightConstraint;               //@synthesize accessoryViewRightConstraint=_accessoryViewRightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewWidthConstraint;               //@synthesize accessoryViewWidthConstraint=_accessoryViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewHeightConstraint;              //@synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long edgeLocation;                                 //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double scalingFactor;                                            //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(PKAccessoryView *)accessoryView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)scalingFactor;
-(void)setAccessoryView:(PKAccessoryView *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateUI;
-(NSLayoutConstraint *)accessoryViewHeightConstraint;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setScalingFactor:(double)arg1 ;
-(void)setContentViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewTopConstraint;
-(UIView *)contentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAccessoryViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(void)_installAccessoryView;
-(void)_installContentView;
-(NSLayoutConstraint *)accessoryViewWidthConstraint;
-(NSLayoutConstraint *)contentViewLeftConstraint;
-(NSLayoutConstraint *)contentViewRightConstraint;
-(NSLayoutConstraint *)accessoryViewTopConstraint;
-(NSLayoutConstraint *)accessoryViewLeftConstraint;
-(NSLayoutConstraint *)accessoryViewRightConstraint;
-(NSLayoutConstraint *)accessoryViewBottomConstraint;
-(void)setContentViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAccessoryViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAccessoryViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAccessoryViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAccessoryViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAccessoryViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

