/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class NSString, MRUVisualStylingProvider, UILabel, MRUEqualizerView;

@interface MRURoutingSubtitleView : UIView <MRUVisualStylingProviderObserver> {

	long long _state;
	NSString* _text;
	MRUVisualStylingProvider* _stylingProvider;
	UILabel* _textLabel;
	MRUEqualizerView* _equalizerView;

}

@property (nonatomic,retain) UILabel * textLabel;                                     //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) MRUEqualizerView * equalizerView;                        //@synthesize equalizerView=_equalizerView - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)updateVisibility;
-(UILabel *)textLabel;
-(void)updateVisualStyling;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)updateContentSizeCategory;
-(MRUEqualizerView *)equalizerView;
-(void)setEqualizerView:(MRUEqualizerView *)arg1 ;
@end

