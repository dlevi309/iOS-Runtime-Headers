/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class UIColor;

@interface PXLivePhotoTrimScrubberSnapStripControllerSpec : NSObject {

	BOOL _alwaysShowKeyTime;
	BOOL _showDefaultKeyTime;
	UIColor* _disabledColor;
	UIColor* _currentPositionMarkerColor;
	UIColor* _originalPositionMarkerColor;
	UIColor* _suggestedMarkerColor;

}

@property (nonatomic,retain) UIColor * disabledColor;                            //@synthesize disabledColor=_disabledColor - In the implementation block
@property (nonatomic,retain) UIColor * currentPositionMarkerColor;               //@synthesize currentPositionMarkerColor=_currentPositionMarkerColor - In the implementation block
@property (nonatomic,retain) UIColor * originalPositionMarkerColor;              //@synthesize originalPositionMarkerColor=_originalPositionMarkerColor - In the implementation block
@property (nonatomic,retain) UIColor * suggestedMarkerColor;                     //@synthesize suggestedMarkerColor=_suggestedMarkerColor - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowKeyTime;                             //@synthesize alwaysShowKeyTime=_alwaysShowKeyTime - In the implementation block
@property (assign,nonatomic) BOOL showDefaultKeyTime;                            //@synthesize showDefaultKeyTime=_showDefaultKeyTime - In the implementation block
-(id)init;
-(void)setDisabledColor:(UIColor *)arg1 ;
-(void)setCurrentPositionMarkerColor:(UIColor *)arg1 ;
-(void)setOriginalPositionMarkerColor:(UIColor *)arg1 ;
-(void)setSuggestedMarkerColor:(UIColor *)arg1 ;
-(BOOL)alwaysShowKeyTime;
-(void)setAlwaysShowKeyTime:(BOOL)arg1 ;
-(BOOL)showDefaultKeyTime;
-(void)setShowDefaultKeyTime:(BOOL)arg1 ;
-(UIColor *)disabledColor;
-(UIColor *)currentPositionMarkerColor;
-(UIColor *)suggestedMarkerColor;
-(UIColor *)originalPositionMarkerColor;
@end

