/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFHomeKitObjectHMApplicationData;
@class NAFuture, HFWallpaperEditCollection;

@interface HFWallpaperEditCollectionBuilder : NSObject {

	BOOL _hkObjectNewlyCreated;
	id<HFHomeKitObject><HMApplicationData> _hkObject;
	long long _namedWallpaperCollectionType;
	NAFuture* _initialEditCollectionFuture;
	HFWallpaperEditCollection* _updatedEditCollection;

}

@property (assign,nonatomic) long long namedWallpaperCollectionType;                         //@synthesize namedWallpaperCollectionType=_namedWallpaperCollectionType - In the implementation block
@property (assign,nonatomic) BOOL hkObjectNewlyCreated;                                      //@synthesize hkObjectNewlyCreated=_hkObjectNewlyCreated - In the implementation block
@property (nonatomic,retain) NAFuture * initialEditCollectionFuture;                         //@synthesize initialEditCollectionFuture=_initialEditCollectionFuture - In the implementation block
@property (nonatomic,retain) HFWallpaperEditCollection * updatedEditCollection;              //@synthesize updatedEditCollection=_updatedEditCollection - In the implementation block
@property (nonatomic,retain) id<HFHomeKitObject><HMApplicationData> hkObject;                //@synthesize hkObject=_hkObject - In the implementation block
-(id)description;
-(long long)namedWallpaperCollectionType;
-(HFWallpaperEditCollection *)updatedEditCollection;
-(void)setHkObjectNewlyCreated:(BOOL)arg1 ;
-(NAFuture *)initialEditCollectionFuture;
-(void)setInitialEditCollectionFuture:(NAFuture *)arg1 ;
-(id)editCollectionForWallpaper:(id)arg1 image:(id)arg2 ;
-(void)setUpdatedEditCollection:(HFWallpaperEditCollection *)arg1 ;
-(BOOL)hkObjectNewlyCreated;
-(id<HFHomeKitObject><HMApplicationData>)hkObject;
-(id)initWithHomeKitObject:(id)arg1 namedWallpaperCollectionType:(long long)arg2 ;
-(void)setHkObject:(id<HFHomeKitObject><HMApplicationData>)arg1 ;
-(id)wallpaperEditCollectionFuture;
-(void)setWallpaper:(id)arg1 image:(id)arg2 ;
-(id)commitWallpaper;
-(void)setNamedWallpaperCollectionType:(long long)arg1 ;
@end

