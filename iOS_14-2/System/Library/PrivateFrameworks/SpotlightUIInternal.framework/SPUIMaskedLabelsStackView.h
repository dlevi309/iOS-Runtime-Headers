/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SpotlightUIInternal/SpotlightUIInternal-Structs.h>
#import <AppSupportUI/NUIContainerStackView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKLabel, NSString, UIFont, TLKProminenceView, UIView;

@interface SPUIMaskedLabelsStackView : NUIContainerStackView <NUIContainerViewDelegate> {

	TLKLabel* _completionLabel;
	TLKLabel* _bridgeLabel;
	TLKLabel* _extensionLabel;
	NSString* _typedString;
	UIFont* _font;
	TLKProminenceView* _extensionLabelProminenceView;
	UIView* _gradientView;
	double _completionStringOffset;
	UIView* _fillerView;

}

@property (retain) TLKProminenceView * extensionLabelProminenceView;              //@synthesize extensionLabelProminenceView=_extensionLabelProminenceView - In the implementation block
@property (retain) UIView * gradientView;                                         //@synthesize gradientView=_gradientView - In the implementation block
@property (assign) double completionStringOffset;                                 //@synthesize completionStringOffset=_completionStringOffset - In the implementation block
@property (retain) UIView * fillerView;                                           //@synthesize fillerView=_fillerView - In the implementation block
@property (nonatomic,readonly) TLKLabel * completionLabel;                        //@synthesize completionLabel=_completionLabel - In the implementation block
@property (nonatomic,readonly) TLKLabel * bridgeLabel;                            //@synthesize bridgeLabel=_bridgeLabel - In the implementation block
@property (nonatomic,readonly) TLKLabel * extensionLabel;                         //@synthesize extensionLabel=_extensionLabel - In the implementation block
@property (nonatomic,retain) NSString * typedString;                              //@synthesize typedString=_typedString - In the implementation block
@property (nonatomic,retain) UIFont * font;                                       //@synthesize font=_font - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(id)init;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)isRTL;
-(TLKLabel *)completionLabel;
-(TLKLabel *)bridgeLabel;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(UIView *)gradientView;
-(TLKLabel *)extensionLabel;
-(void)setGradientView:(UIView *)arg1 ;
-(UIFont *)font;
-(NSString *)typedString;
-(void)setTypedString:(NSString *)arg1 ;
-(void)setExtensionLabelProminenceView:(TLKProminenceView *)arg1 ;
-(TLKProminenceView *)extensionLabelProminenceView;
-(void)setFillerView:(UIView *)arg1 ;
-(UIView *)fillerView;
-(void)resetStringOffset;
-(void)setCompletionStringOffset:(double)arg1 ;
-(double)completionStringOffset;
@end

