/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/


@class NSString;

@interface APUIActionCardViewConfig : NSObject {

	BOOL _showThumbnailImage;
	BOOL _useAppIconAsThumbnail;
	BOOL _showActionButton;
	BOOL _showAppFootnote;
	BOOL _showAppFootnoteIcon;
	BOOL _useTinyIconVariant;
	BOOL _fallbackToCustomResponseString;
	unsigned long long _style;
	NSString* _bundleId;
	long long _maxLinesForTitle;
	long long _maxLinesForSubtitle;
	long long _maxLinesForFootnote;

}

@property (assign,nonatomic) unsigned long long style;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                                //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL showThumbnailImage;                          //@synthesize showThumbnailImage=_showThumbnailImage - In the implementation block
@property (assign,nonatomic) BOOL useAppIconAsThumbnail;                       //@synthesize useAppIconAsThumbnail=_useAppIconAsThumbnail - In the implementation block
@property (assign,nonatomic) BOOL showActionButton;                            //@synthesize showActionButton=_showActionButton - In the implementation block
@property (assign,nonatomic) BOOL showAppFootnote;                             //@synthesize showAppFootnote=_showAppFootnote - In the implementation block
@property (assign,nonatomic) BOOL showAppFootnoteIcon;                         //@synthesize showAppFootnoteIcon=_showAppFootnoteIcon - In the implementation block
@property (assign,nonatomic) BOOL useTinyIconVariant;                          //@synthesize useTinyIconVariant=_useTinyIconVariant - In the implementation block
@property (assign,nonatomic) long long maxLinesForTitle;                       //@synthesize maxLinesForTitle=_maxLinesForTitle - In the implementation block
@property (assign,nonatomic) long long maxLinesForSubtitle;                    //@synthesize maxLinesForSubtitle=_maxLinesForSubtitle - In the implementation block
@property (assign,nonatomic) long long maxLinesForFootnote;                    //@synthesize maxLinesForFootnote=_maxLinesForFootnote - In the implementation block
@property (assign,nonatomic) BOOL fallbackToCustomResponseString;              //@synthesize fallbackToCustomResponseString=_fallbackToCustomResponseString - In the implementation block
-(id)init;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(BOOL)showActionButton;
-(void)setMaxLinesForTitle:(long long)arg1 ;
-(void)setMaxLinesForSubtitle:(long long)arg1 ;
-(void)setMaxLinesForFootnote:(long long)arg1 ;
-(BOOL)showThumbnailImage;
-(void)setShowThumbnailImage:(BOOL)arg1 ;
-(BOOL)useAppIconAsThumbnail;
-(void)setUseAppIconAsThumbnail:(BOOL)arg1 ;
-(void)setShowActionButton:(BOOL)arg1 ;
-(BOOL)showAppFootnote;
-(void)setShowAppFootnote:(BOOL)arg1 ;
-(BOOL)showAppFootnoteIcon;
-(void)setShowAppFootnoteIcon:(BOOL)arg1 ;
-(BOOL)useTinyIconVariant;
-(void)setUseTinyIconVariant:(BOOL)arg1 ;
-(long long)maxLinesForTitle;
-(long long)maxLinesForSubtitle;
-(long long)maxLinesForFootnote;
-(BOOL)fallbackToCustomResponseString;
-(void)setFallbackToCustomResponseString:(BOOL)arg1 ;
@end

