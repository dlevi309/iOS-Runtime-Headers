/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <DocumentManager/DocumentManager-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface DOCAppearance : NSObject <NSSecureCoding, NSCopying> {

	NSString* _collectionCreateButtonTitle;
	BOOL _showsCreateButton;
	BOOL _shouldShowFileExtensions;
	BOOL _forceClearBackground;
	BOOL _alwaysEnableScrollInSourceView;
	double _compactHorizontalTableStackSpacing;
	double _regularHorizontalTableStackSpacing;
	double _fullHorizontalTableStackSpacing;
	UIColor* _largeTitleColor;
	UIColor* _backgroundTintColor;
	unsigned long long _browserUserInterfaceStyle;
	double _createButtonAspectRatio;

}

@property (readonly) UIColor * backgroundColor; 
@property (assign,nonatomic) double compactHorizontalTableStackSpacing;                 //@synthesize compactHorizontalTableStackSpacing=_compactHorizontalTableStackSpacing - In the implementation block
@property (assign,nonatomic) double regularHorizontalTableStackSpacing;                 //@synthesize regularHorizontalTableStackSpacing=_regularHorizontalTableStackSpacing - In the implementation block
@property (assign,nonatomic) double fullHorizontalTableStackSpacing;                    //@synthesize fullHorizontalTableStackSpacing=_fullHorizontalTableStackSpacing - In the implementation block
@property (nonatomic,retain) UIColor * largeTitleColor;                                 //@synthesize largeTitleColor=_largeTitleColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundTintColor;                             //@synthesize backgroundTintColor=_backgroundTintColor - In the implementation block
@property (assign,nonatomic) BOOL showsCreateButton;                                    //@synthesize showsCreateButton=_showsCreateButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowFileExtensions;                             //@synthesize shouldShowFileExtensions=_shouldShowFileExtensions - In the implementation block
@property (assign,nonatomic) BOOL forceClearBackground;                                 //@synthesize forceClearBackground=_forceClearBackground - In the implementation block
@property (assign,nonatomic) unsigned long long browserUserInterfaceStyle;              //@synthesize browserUserInterfaceStyle=_browserUserInterfaceStyle - In the implementation block
@property (assign,nonatomic) double createButtonAspectRatio;                            //@synthesize createButtonAspectRatio=_createButtonAspectRatio - In the implementation block
@property (nonatomic,retain) NSString * collectionCreateButtonTitle; 
@property (assign) BOOL alwaysEnableScrollInSourceView;                                 //@synthesize alwaysEnableScrollInSourceView=_alwaysEnableScrollInSourceView - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)documentsPickerAppearance;
+(id)recentsPopoverAppearance;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldShowFileExtensions;
-(unsigned long long)browserUserInterfaceStyle;
-(void)setShouldShowFileExtensions:(BOOL)arg1 ;
-(void)setBrowserUserInterfaceStyle:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)backgroundTintColor;
-(void)setBackgroundTintColor:(UIColor *)arg1 ;
-(void)setShowsCreateButton:(BOOL)arg1 ;
-(BOOL)showsCreateButton;
-(double)createButtonAspectRatio;
-(void)setCreateButtonAspectRatio:(double)arg1 ;
-(NSString *)collectionCreateButtonTitle;
-(void)setCollectionCreateButtonTitle:(NSString *)arg1 ;
-(double)compactHorizontalTableStackSpacing;
-(double)regularHorizontalTableStackSpacing;
-(double)fullHorizontalTableStackSpacing;
-(UIColor *)largeTitleColor;
-(BOOL)forceClearBackground;
-(void)setCompactHorizontalTableStackSpacing:(double)arg1 ;
-(void)setRegularHorizontalTableStackSpacing:(double)arg1 ;
-(void)setFullHorizontalTableStackSpacing:(double)arg1 ;
-(BOOL)alwaysEnableScrollInSourceView;
-(void)setAlwaysEnableScrollInSourceView:(BOOL)arg1 ;
-(void)setForceClearBackground:(BOOL)arg1 ;
-(void)setLargeTitleColor:(UIColor *)arg1 ;
@end

