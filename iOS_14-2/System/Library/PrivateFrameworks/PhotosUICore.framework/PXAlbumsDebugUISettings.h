/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@class NSString;

@interface PXAlbumsDebugUISettings : PXSettings {

	BOOL _showBestKeyFrameDebugAlbum;
	BOOL _showUtilitiesDebugAlbum;
	BOOL _showDreamyDebugAlbum;
	BOOL _showCustomDebugAlbum;
	NSString* _customDebugAlbumTitle;
	NSString* _customDebugInternalPredicate;
	NSString* _customDebugPredicate;

}

@property (assign,nonatomic) BOOL showBestKeyFrameDebugAlbum;                    //@synthesize showBestKeyFrameDebugAlbum=_showBestKeyFrameDebugAlbum - In the implementation block
@property (assign,nonatomic) BOOL showUtilitiesDebugAlbum;                       //@synthesize showUtilitiesDebugAlbum=_showUtilitiesDebugAlbum - In the implementation block
@property (assign,nonatomic) BOOL showDreamyDebugAlbum;                          //@synthesize showDreamyDebugAlbum=_showDreamyDebugAlbum - In the implementation block
@property (assign,nonatomic) BOOL showCustomDebugAlbum;                          //@synthesize showCustomDebugAlbum=_showCustomDebugAlbum - In the implementation block
@property (nonatomic,copy) NSString * customDebugAlbumTitle;                     //@synthesize customDebugAlbumTitle=_customDebugAlbumTitle - In the implementation block
@property (nonatomic,copy) NSString * customDebugInternalPredicate;              //@synthesize customDebugInternalPredicate=_customDebugInternalPredicate - In the implementation block
@property (nonatomic,copy) NSString * customDebugPredicate;                      //@synthesize customDebugPredicate=_customDebugPredicate - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(/*^block*/id)_predicateValidatorUsingInternalPredicate:(BOOL)arg1 ;
-(id)parentSettings;
-(void)setDefaultValues;
-(NSString *)customDebugInternalPredicate;
-(BOOL)showUtilitiesDebugAlbum;
-(BOOL)showBestKeyFrameDebugAlbum;
-(NSString *)customDebugPredicate;
-(NSString *)customDebugAlbumTitle;
-(void)setCustomDebugInternalPredicate:(NSString *)arg1 ;
-(void)setShowUtilitiesDebugAlbum:(BOOL)arg1 ;
-(void)setCustomDebugPredicate:(NSString *)arg1 ;
-(void)setCustomDebugAlbumTitle:(NSString *)arg1 ;
-(BOOL)showCustomDebugAlbum;
-(void)setShowDreamyDebugAlbum:(BOOL)arg1 ;
-(void)setShowBestKeyFrameDebugAlbum:(BOOL)arg1 ;
-(BOOL)showDreamyDebugAlbum;
-(void)setShowCustomDebugAlbum:(BOOL)arg1 ;
@end

