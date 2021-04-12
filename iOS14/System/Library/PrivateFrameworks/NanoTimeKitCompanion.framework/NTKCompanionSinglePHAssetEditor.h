/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@class NSString;

@interface NTKCompanionSinglePHAssetEditor : NTKCompanionResourceDirectoryEditor {

	NSString* _albumIdentifier;
	NSString* _albumName;
	BOOL _albumNameValid;

}

@property (assign,nonatomic) BOOL shouldFinalize; 
@property (nonatomic,retain) NSString * albumIdentifier;              //@synthesize albumIdentifier=_albumIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * albumName; 
-(NSString *)albumName;
-(void)setAlbumIdentifier:(NSString *)arg1 ;
-(NSString *)albumIdentifier;
-(void)generateGalleryPreviewResourceDirectoryWithCompletion:(/*^block*/id)arg1 ;
-(void)finalizeWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 shouldFinalize:(BOOL)arg3 ;
-(id)optionsForSingleAsset;
-(id)_fetchSingleAsset;
-(void)setShouldFinalize:(BOOL)arg1 ;
-(id)_fetchAlbumName;
-(id)_createResourceDirectoryForSinglePHAssetWithPreviewOnly:(BOOL)arg1 ;
-(BOOL)shouldFinalize;
@end

