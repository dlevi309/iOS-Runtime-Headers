/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
*/

#import <libobjc.A.dylib/ALAssetsLibraryAsset.h>

@protocol PLAlbumProtocol;
@class ALAssetsLibrary, NSObject, ALAssetsFilter, NSMutableDictionary, PLPhotoLibrary, NSString;

@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset> {

	BOOL _loadedAssets;
	ALAssetsLibrary* _library;
	BOOL _isValid;
	BOOL _isCloudSharedGroup;
	BOOL _applyHyperionFilter;
	NSObject*<PLAlbumProtocol> _album;
	ALAssetsFilter* _assetsFilter;
	unsigned long long _groupType;
	NSMutableDictionary* _propertyValues;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) NSMutableDictionary * propertyValues;              //@synthesize propertyValues=_propertyValues - In the implementation block
@property (nonatomic,retain) NSObject*<PLAlbumProtocol> album;                  //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * _photoLibrary;                    //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) BOOL isCloudSharedGroup;                           //@synthesize isCloudSharedGroup=_isCloudSharedGroup - In the implementation block
@property (assign,nonatomic) BOOL applyHyperionFilter;                          //@synthesize applyHyperionFilter=_applyHyperionFilter - In the implementation block
@property (nonatomic,retain) ALAssetsFilter * assetsFilter;                     //@synthesize assetsFilter=_assetsFilter - In the implementation block
@property (assign,nonatomic) unsigned long long groupType;                      //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL isValid;                                      //@synthesize isValid=_isValid - In the implementation block
@property (assign,nonatomic) ALAssetsLibrary * library; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isValid;
-(NSObject*<PLAlbumProtocol>)album;
-(id)valueForProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(ALAssetsLibrary *)library;
-(PLPhotoLibrary *)_photoLibrary;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(void)setAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(unsigned long long)groupType;
-(void)setLibrary:(ALAssetsLibrary *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(void)setGroupType:(unsigned long long)arg1 ;
-(NSMutableDictionary *)propertyValues;
-(void)setPropertyValues:(NSMutableDictionary *)arg1 ;
-(void)setAssetsFilter:(ALAssetsFilter *)arg1 ;
-(void)libraryDidChange;
-(void)set_photoLibrary:(PLPhotoLibrary *)arg1 ;
-(id)initWithAlbum:(id)arg1 library:(id)arg2 ;
-(int)albumFilter;
-(void)resetAssets;
-(void)updateAlbumFiltering;
-(void)populateAssets;
-(ALAssetsFilter *)assetsFilter;
-(BOOL)isCloudSharedGroup;
-(void)setIsCloudSharedGroup:(BOOL)arg1 ;
-(BOOL)applyHyperionFilter;
-(void)setApplyHyperionFilter:(BOOL)arg1 ;
@end

