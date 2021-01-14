/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableGadgetSectionHeader.h>

@class NSString, PXGadgetSpec, UIFont, UIImage;

@interface PXGadgetSectionHeader : PXObservable <PXMutableGadgetSectionHeader> {

	BOOL _isFirstSection;
	BOOL _shouldShowDividerOnFirstSection;
	unsigned long long _headerStyle;
	NSString* _headerTitle;
	NSString* _customButtonTitle;
	unsigned long long _buttonType;
	PXGadgetSpec* _gadgetSpec;
	/*^block*/id _accessoryButtonPressed;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) id accessoryButtonPressed;                           //@synthesize accessoryButtonPressed=_accessoryButtonPressed - In the implementation block
@property (nonatomic,readonly) NSString * headerTitle;                          //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) UIFont * headerFont; 
@property (nonatomic,readonly) BOOL shouldShowAccessoryButton; 
@property (nonatomic,readonly) NSString * buttonTitle; 
@property (nonatomic,readonly) UIFont * buttonFont; 
@property (nonatomic,readonly) UIImage * buttonImage; 
@property (nonatomic,readonly) BOOL shouldShowDivider; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                         //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) double headerHeight; 
@property (nonatomic,readonly) double titleHeight; 
@property (nonatomic,readonly) double titleTopSpacing; 
@property (nonatomic,readonly) double titleBottomSpacing; 
@property (assign,nonatomic) unsigned long long headerStyle;                    //@synthesize headerStyle=_headerStyle - In the implementation block
@property (assign,nonatomic) unsigned long long buttonType;                     //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,copy) NSString * customButtonTitle;                        //@synthesize customButtonTitle=_customButtonTitle - In the implementation block
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                         //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic) BOOL isFirstSection;                               //@synthesize isFirstSection=_isFirstSection - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDividerOnFirstSection;              //@synthesize shouldShowDividerOnFirstSection=_shouldShowDividerOnFirstSection - In the implementation block
+(id)buttonImageForButtonType:(unsigned long long)arg1 ;
+(id)_buttonImageNameForButtonType:(unsigned long long)arg1 ;
+(id)buttonFontForButtonType:(unsigned long long)arg1 ;
+(id)titleFontForHeaderStyle:(unsigned long long)arg1 ;
-(PXGadgetSpec *)gadgetSpec;
-(double)titleHeight;
-(NSString *)buttonTitle;
-(NSString *)headerTitle;
-(void)setIsFirstSection:(BOOL)arg1 ;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(void)setButtonType:(unsigned long long)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(UIFont *)buttonFont;
-(UIFont *)headerFont;
-(double)titleTopSpacing;
-(void)performChangesWithGadget:(id)arg1 additionalChanges:(/*^block*/id)arg2 ;
-(void)setAccessoryButtonPressed:(id)arg1 ;
-(BOOL)shouldShowDivider;
-(double)titleBottomSpacing;
-(id)initWithGadget:(id)arg1 ;
-(void)setHeaderStyle:(unsigned long long)arg1 ;
-(void)setCustomButtonTitle:(NSString *)arg1 ;
-(id)initWithConfigurationBlock:(/*^block*/id)arg1 ;
-(BOOL)isFirstSection;
-(id)accessoryButtonPressed;
-(void)setShouldShowDividerOnFirstSection:(BOOL)arg1 ;
-(BOOL)shouldShowDividerOnFirstSection;
-(BOOL)shouldShowAccessoryButton;
-(UIImage *)buttonImage;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(void)_configureWithGadget:(id)arg1 ;
-(unsigned long long)headerStyle;
-(double)headerHeight;
-(void)performChanges:(/*^block*/id)arg1 ;
-(unsigned long long)buttonType;
-(NSString *)customButtonTitle;
@end

