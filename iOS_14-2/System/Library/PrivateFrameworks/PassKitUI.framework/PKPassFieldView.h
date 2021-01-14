/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPassField, PKPassFieldTemplate, PKPassColorProfile, PKDiffView, UILabel;

@interface PKPassFieldView : UIView {

	BOOL _needsRecalculation;
	CGSize _cachedSize;
	long long _background;
	PKPassField* _field;
	PKPassFieldTemplate* _fieldTemplate;
	PKPassColorProfile* _colorProfile;
	PKDiffView* _diffView;
	UILabel* _labelLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) PKDiffView * diffView;                            //@synthesize diffView=_diffView - In the implementation block
@property (nonatomic,retain) PKPassField * field;                              //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) PKPassFieldTemplate * fieldTemplate;              //@synthesize fieldTemplate=_fieldTemplate - In the implementation block
@property (nonatomic,retain) PKPassColorProfile * colorProfile;                //@synthesize colorProfile=_colorProfile - In the implementation block
@property (nonatomic,readonly) UILabel * labelLabel;                           //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                           //@synthesize valueLabel=_valueLabel - In the implementation block
+(id)newViewForField:(id)arg1 fieldTemplate:(id)arg2 ;
-(PKPassField *)field;
-(UILabel *)labelLabel;
-(id)description;
-(void)layoutSubviews;
-(PKDiffView *)diffView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKPassColorProfile *)colorProfile;
-(void)setField:(PKPassField *)arg1 ;
-(UILabel *)valueLabel;
-(void)presentDiff:(id)arg1 inView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setColorProfile:(PKPassColorProfile *)arg1 ;
-(PKPassFieldTemplate *)fieldTemplate;
-(void)setFieldTemplate:(PKPassFieldTemplate *)arg1 ;
-(void)invalidateCachedFieldSize;
-(id)initWithField:(id)arg1 fieldTemplate:(id)arg2 ;
-(void)setColorProfile:(id)arg1 background:(long long)arg2 ;
-(void)setDiffView:(PKDiffView *)arg1 ;
-(BOOL)_shouldDisplayLabel;
-(id)_labelAttributedStringForColorProfile:(id)arg1 ;
-(id)_valueAttributedStringForColorProfile:(id)arg1 ;
-(CGSize)_resizeMultiLineValueFontForAvailableSize:(CGSize)arg1 ;
-(void)dealloc;
@end

