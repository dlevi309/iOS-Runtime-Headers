/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXDiagnosticsSettings : PXSettings {

	BOOL _enableContextualGesture;
	BOOL _enableInternalSettingsService;
	BOOL _enableGenericService;
	BOOL _enableGraphService;
	BOOL _enableTitleFontService;
	BOOL _enableCompleteMyMomentService;
	BOOL _enableDebugDictionaryService;
	BOOL _enableScrollService;
	double _scrollSpeed;
	long long _scrollIterations;

}

@property (assign,nonatomic) BOOL enableContextualGesture;                    //@synthesize enableContextualGesture=_enableContextualGesture - In the implementation block
@property (assign,nonatomic) BOOL enableInternalSettingsService;              //@synthesize enableInternalSettingsService=_enableInternalSettingsService - In the implementation block
@property (assign,nonatomic) BOOL enableGenericService;                       //@synthesize enableGenericService=_enableGenericService - In the implementation block
@property (assign,nonatomic) BOOL enableGraphService;                         //@synthesize enableGraphService=_enableGraphService - In the implementation block
@property (assign,nonatomic) BOOL enableTitleFontService;                     //@synthesize enableTitleFontService=_enableTitleFontService - In the implementation block
@property (assign,nonatomic) BOOL enableCompleteMyMomentService;              //@synthesize enableCompleteMyMomentService=_enableCompleteMyMomentService - In the implementation block
@property (assign,nonatomic) BOOL enableDebugDictionaryService;               //@synthesize enableDebugDictionaryService=_enableDebugDictionaryService - In the implementation block
@property (assign,nonatomic) BOOL enableScrollService;                        //@synthesize enableScrollService=_enableScrollService - In the implementation block
@property (assign,nonatomic) double scrollSpeed;                              //@synthesize scrollSpeed=_scrollSpeed - In the implementation block
@property (assign,nonatomic) long long scrollIterations;                      //@synthesize scrollIterations=_scrollIterations - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setEnableTitleFontService:(BOOL)arg1 ;
-(void)setEnableDebugDictionaryService:(BOOL)arg1 ;
-(BOOL)enableScrollService;
-(BOOL)enableInternalSettingsService;
-(void)setEnableInternalSettingsService:(BOOL)arg1 ;
-(void)setEnableGenericService:(BOOL)arg1 ;
-(void)setScrollIterations:(long long)arg1 ;
-(long long)scrollIterations;
-(void)setEnableCompleteMyMomentService:(BOOL)arg1 ;
-(BOOL)enableCompleteMyMomentService;
-(BOOL)enableTitleFontService;
-(void)setEnableScrollService:(BOOL)arg1 ;
-(void)setScrollSpeed:(double)arg1 ;
-(BOOL)enableGenericService;
-(double)scrollSpeed;
-(void)setEnableGraphService:(BOOL)arg1 ;
-(BOOL)enableGraphService;
-(BOOL)enableDebugDictionaryService;
-(void)setEnableContextualGesture:(BOOL)arg1 ;
-(BOOL)enableContextualGesture;
@end

