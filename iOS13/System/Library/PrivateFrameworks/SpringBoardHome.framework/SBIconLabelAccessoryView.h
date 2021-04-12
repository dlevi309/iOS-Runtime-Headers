/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBIconLabelAccessoryView.h>

@protocol SBIconLabelAccessoryView <SBReusableView>
@property (nonatomic,readonly) BOOL hasBaseline; 
@property (nonatomic,readonly) double baselineOffsetFromBottom; 
@property (nonatomic,readonly) UIEdgeInsets alignmentRectInsets; 
@required
-(BOOL)hasBaseline;
-(double)baselineOffsetFromBottom;
-(UIEdgeInsets)alignmentRectInsets;
-(void)updateWithLegibilitySettings:(id)arg1 labelFont:(id)arg2;

@end


@class UIImage, NSString;

@interface SBIconLabelAccessoryView : UIView <SBIconLabelAccessoryView> {

	UIImage* _baseImage;

}

@property (nonatomic,retain) UIImage * baseImage;                             //@synthesize baseImage=_baseImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasBaseline; 
@property (nonatomic,readonly) double baselineOffsetFromBottom; 
@property (nonatomic,readonly) UIEdgeInsets alignmentRectInsets; 
+(id)labelAccessorySystemImageName;
+(long long)labelAccessorySystemImageScale;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)hasBaseline;
-(double)baselineOffsetFromBottom;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setBaseImage:(UIImage *)arg1 ;
-(UIImage *)baseImage;
-(void)updateWithLegibilitySettings:(id)arg1 labelFont:(id)arg2 ;
-(void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2 ;
@end

