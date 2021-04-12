/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@interface CNPhotoPickerConfiguration : NSObject {

	BOOL _includeContactImage;
	BOOL _includeUnifiedContactImages;
	BOOL _includeFaces;
	BOOL _includeMonograms;
	BOOL _includeAnimoji;
	BOOL _includeRecents;
	BOOL _allowPhotoCapture;
	BOOL _allowAnimojiCreation;
	BOOL _allowRotation;

}

@property (nonatomic,readonly) BOOL includeContactImage;                      //@synthesize includeContactImage=_includeContactImage - In the implementation block
@property (nonatomic,readonly) BOOL includeUnifiedContactImages;              //@synthesize includeUnifiedContactImages=_includeUnifiedContactImages - In the implementation block
@property (nonatomic,readonly) BOOL includeFaces;                             //@synthesize includeFaces=_includeFaces - In the implementation block
@property (nonatomic,readonly) BOOL includeMonograms;                         //@synthesize includeMonograms=_includeMonograms - In the implementation block
@property (nonatomic,readonly) BOOL includeAnimoji;                           //@synthesize includeAnimoji=_includeAnimoji - In the implementation block
@property (nonatomic,readonly) BOOL includeRecents;                           //@synthesize includeRecents=_includeRecents - In the implementation block
@property (nonatomic,readonly) BOOL allowPhotoCapture;                        //@synthesize allowPhotoCapture=_allowPhotoCapture - In the implementation block
@property (nonatomic,readonly) BOOL allowAnimojiCreation;                     //@synthesize allowAnimojiCreation=_allowAnimojiCreation - In the implementation block
@property (nonatomic,readonly) BOOL allowRotation;                            //@synthesize allowRotation=_allowRotation - In the implementation block
+(id)defaultConfiguration;
+(id)contactsConfiguration;
+(id)gameCenterConfiguration;
-(BOOL)includeFaces;
-(BOOL)allowRotation;
-(BOOL)includeUnifiedContactImages;
-(BOOL)includeContactImage;
-(BOOL)includeMonograms;
-(BOOL)includeAnimoji;
-(BOOL)includeRecents;
-(id)configurationBySettingAllowsPhotoCapture:(BOOL)arg1 ;
-(id)initWithIncludeContactImage:(BOOL)arg1 includeUnifiedContactImages:(BOOL)arg2 includeFaces:(BOOL)arg3 includeMonograms:(BOOL)arg4 includeAnimoji:(BOOL)arg5 includeRecents:(BOOL)arg6 allowPhotoCapture:(BOOL)arg7 allowAnimojiCreation:(BOOL)arg8 allowRotation:(BOOL)arg9 ;
-(BOOL)allowPhotoCapture;
-(BOOL)allowAnimojiCreation;
@end

