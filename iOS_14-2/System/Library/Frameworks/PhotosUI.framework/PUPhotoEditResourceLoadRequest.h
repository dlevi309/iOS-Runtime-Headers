/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PUPhotoEditResourceLoaderDelegate;
@interface PUPhotoEditResourceLoadRequest : NSObject <NSCopying> {

	BOOL _requireLocalResources;
	BOOL _requireAdjustments;
	BOOL _assetLoadingAsRaw;
	id<PUPhotoEditResourceLoaderDelegate> _delegate;
	long long _version;
	long long __resolvedVersion;
	CGSize _targetSize;

}

@property (assign,setter=_setResolvedVersion:,nonatomic) long long _resolvedVersion;              //@synthesize _resolvedVersion=__resolvedVersion - In the implementation block
@property (assign,nonatomic) BOOL assetLoadingAsRaw;                                              //@synthesize assetLoadingAsRaw=_assetLoadingAsRaw - In the implementation block
@property (assign,nonatomic) BOOL requireLocalResources;                                          //@synthesize requireLocalResources=_requireLocalResources - In the implementation block
@property (assign,nonatomic) BOOL requireAdjustments;                                             //@synthesize requireAdjustments=_requireAdjustments - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoEditResourceLoaderDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long version;                                                   //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                                   //@synthesize targetSize=_targetSize - In the implementation block
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(id<PUPhotoEditResourceLoaderDelegate>)delegate;
-(void)setDelegate:(id<PUPhotoEditResourceLoaderDelegate>)arg1 ;
-(BOOL)_needsLoadAdjustments;
-(void)_resolveVersionIfNeededWithWorkVersion:(long long)arg1 ;
-(BOOL)_isWorkVersionResolved;
-(void)_assertWorkVersionResolved;
-(BOOL)requireLocalResources;
-(void)setRequireLocalResources:(BOOL)arg1 ;
-(BOOL)requireAdjustments;
-(void)setRequireAdjustments:(BOOL)arg1 ;
-(long long)_resolvedVersion;
-(void)_setResolvedVersion:(long long)arg1 ;
-(BOOL)assetLoadingAsRaw;
-(void)setAssetLoadingAsRaw:(BOOL)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

