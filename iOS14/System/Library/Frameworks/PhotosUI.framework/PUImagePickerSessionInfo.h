/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUSessionInfo.h>

@class NSString;

@interface PUImagePickerSessionInfo : PUSessionInfo {

	BOOL _isLimitedLibraryPicker;
	BOOL _showsPrompt;
	unsigned long long _selectionLimit;
	NSString* _staticPrompt;

}

@property (assign,nonatomic) BOOL showsPrompt;                   //@synthesize showsPrompt=_showsPrompt - In the implementation block
@property (nonatomic,copy) NSString * staticPrompt;              //@synthesize staticPrompt=_staticPrompt - In the implementation block
-(unsigned long long)selectionLimit;
-(id)initWithPhotoSelectionManager:(id)arg1 ;
-(BOOL)showsPrompt;
-(void)setShowsPrompt:(BOOL)arg1 ;
-(NSString *)staticPrompt;
-(id)initWithPhotosViewDelegate:(id)arg1 loadingStatusManager:(id)arg2 allowMultipleSelection:(BOOL)arg3 limitedLibrary:(BOOL)arg4 ;
-(void)setStaticPrompt:(NSString *)arg1 ;
-(BOOL)isForAssetPicker;
-(void)setSelectionLimit:(unsigned long long)arg1 ;
-(id)localizedPrompt;
-(BOOL)isSelectingAssets;
-(BOOL)isLimitedLibraryPicker;
@end

