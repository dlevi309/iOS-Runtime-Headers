/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKPaletteToolView.h>
#import <libobjc.A.dylib/PKPaletteInkingTool.h>

@class PKInk, NSString, UILabel, NSLayoutConstraint;

@interface PKPaletteHandwritingToolView : PKPaletteToolView <PKPaletteInkingTool> {

	BOOL _needsUpdateTitleLabel;
	PKInk* _ink;
	NSString* _localeIdentifier;
	UILabel* _toolLabel;
	NSLayoutConstraint* _toolLabelCenterXConstraint;
	NSLayoutConstraint* _toolLabelCenterYConstraint;

}

@property (nonatomic,retain) UILabel * toolLabel;                                          //@synthesize toolLabel=_toolLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolLabelCenterXConstraint;              //@synthesize toolLabelCenterXConstraint=_toolLabelCenterXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolLabelCenterYConstraint;              //@synthesize toolLabelCenterYConstraint=_toolLabelCenterYConstraint - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateTitleLabel;                                   //@synthesize needsUpdateTitleLabel=_needsUpdateTitleLabel - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                                    //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) PKInk * ink;                                                //@synthesize ink=_ink - In the implementation block
@property (nonatomic,readonly) NSString * toolIdentifier; 
@property (nonatomic,readonly) id<PKPaletteInkingTool> inkingTool; 
@property (nonatomic,readonly) id<PKPaletteErasingTool> erasingTool; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localeIdentifier;
-(PKInk *)ink;
-(id)init;
-(void)updateConstraints;
-(void)_updateUI;
-(void)setScalingFactor:(double)arg1 ;
-(void)setInkColor:(id)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(void)setInkWeight:(double)arg1 ;
-(id)initWithToolIdentifier:(id)arg1 ;
-(BOOL)isHandwritingTool;
-(void)setNeedsUpdateTitleLabel:(BOOL)arg1 ;
-(CGAffineTransform)_toolLabelImageViewTransform;
-(UILabel *)toolLabel;
-(BOOL)needsUpdateTitleLabel;
-(id)_toolLabelText;
-(CGPoint)_toolLabelCenterOffset;
-(NSLayoutConstraint *)toolLabelCenterXConstraint;
-(NSLayoutConstraint *)toolLabelCenterYConstraint;
-(void)setToolLabel:(UILabel *)arg1 ;
-(void)setToolLabelCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolLabelCenterYConstraint:(NSLayoutConstraint *)arg1 ;
@end

