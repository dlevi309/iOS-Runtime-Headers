/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetsGroupPrivate;

@interface ALAssetsGroup : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetsGroupPrivate * internal;                //@synthesize internal=_internal - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
-(void)setInternal:(ALAssetsGroupPrivate *)arg1 ;
-(BOOL)isEditable;
-(ALAssetsGroupPrivate *)internal;
-(id)description;
-(BOOL)isValid;
-(BOOL)addAsset:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(long long)numberOfAssets;
-(CGImageRef)posterImage;
-(id)_uuid;
-(void)dealloc;
-(id)_typeAsString;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithPhotoAlbum:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3 ;
-(void)setAssetsFilter:(id)arg1 ;
-(void)enumerateAssetsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

