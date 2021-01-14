/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHCPLAssetResource.h>

@protocol PLResourceIdentity;
@class NSURL, NSDate, PHPhotoLibrary, NSString, NSManagedObjectID;

@interface PHAssetResource : NSObject <PHCPLAssetResource> {

	NSURL* _privateFileURL;
	long long _pixelWidth;
	long long _pixelHeight;
	unsigned long long _fileSize;
	BOOL _locallyAvailable;
	NSDate* _trashedDate;
	BOOL _trashed;
	BOOL _inCloud;
	PHPhotoLibrary* _photoLibrary;
	/*^block*/id _privateFileLoader;
	BOOL _current;
	unsigned _orientation;
	long long _type;
	NSString* _assetLocalIdentifier;
	NSString* _uniformTypeIdentifier;
	NSString* _originalFilename;
	id<PLResourceIdentity> _backingResourceIdentity;
	NSManagedObjectID* _assetObjectID;
	unsigned long long _cplResourceType;
	NSString* _libraryID;

}

@property (nonatomic,readonly) NSURL * privateFileURL; 
@property (nonatomic,copy,readonly) id privateFileLoader; 
@property (nonatomic,readonly) long long pixelWidth; 
@property (nonatomic,readonly) long long pixelHeight; 
@property (nonatomic,readonly) long long analysisType; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,readonly) NSDate * trashedDate; 
@property (getter=isTrashed,nonatomic,readonly) BOOL trashed; 
@property (getter=isLocallyAvailable,nonatomic,readonly) BOOL locallyAvailable; 
@property (getter=isInCloud,nonatomic,readonly) BOOL inCloud; 
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) id<PLResourceIdentity> backingResourceIdentity;               //@synthesize backingResourceIdentity=_backingResourceIdentity - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * assetObjectID;                            //@synthesize assetObjectID=_assetObjectID - In the implementation block
@property (assign,nonatomic) unsigned orientation;                                           //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) unsigned long long cplResourceType;                             //@synthesize cplResourceType=_cplResourceType - In the implementation block
@property (assign,getter=isLocallyAvailable,nonatomic) BOOL locallyAvailable;                //@synthesize locallyAvailable=_locallyAvailable - In the implementation block
@property (nonatomic,retain) NSURL * privateFileURL;                                         //@synthesize privateFileURL=_privateFileURL - In the implementation block
@property (getter=isCurrent,nonatomic,readonly) BOOL current;                                //@synthesize current=_current - In the implementation block
@property (nonatomic,readonly) NSString * libraryID;                                         //@synthesize libraryID=_libraryID - In the implementation block
@property (nonatomic,readonly) long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetLocalIdentifier;                         //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniformTypeIdentifier;                        //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalFilename;                             //@synthesize originalFilename=_originalFilename - In the implementation block
+(id)assetResourcesForAsset:(id)arg1 ;
+(id)assetResourcesForLivePhoto:(id)arg1 ;
+(id)assetResourcesForAsset:(id)arg1 includeDerivatives:(BOOL)arg2 ;
+(id)assetResourcesForAsset:(id)arg1 includeDerivatives:(BOOL)arg2 includeMetadata:(BOOL)arg3 ;
+(id)assetResourcesForAsset:(id)arg1 includeDerivatives:(BOOL)arg2 includeMetadata:(BOOL)arg3 includeAdjustmentOverflowDataBlob:(BOOL)arg4 ;
+(id)assetResourceForAsset:(id)arg1 qualityClass:(id)arg2 ;
+(id)_assetResourcesFromPLResources:(id)arg1 includeMetadata:(BOOL)arg2 mediaMetadataVirtualResources:(id)arg3 asset:(id)arg4 assetHasAdjustments:(BOOL)arg5 includeDerivatives:(BOOL)arg6 includeAdjustmentOverflowDataBlob:(BOOL)arg7 ;
-(NSDate *)trashedDate;
-(PHPhotoLibrary *)photoLibrary;
-(BOOL)isTrashed;
-(BOOL)isInCloud;
-(NSManagedObjectID *)assetObjectID;
-(unsigned long long)fileSize;
-(NSString *)libraryID;
-(id)debugDescription;
-(NSString *)uniformTypeIdentifier;
-(unsigned long long)cplResourceType;
-(id)description;
-(long long)pixelHeight;
-(NSString *)assetLocalIdentifier;
-(long long)type;
-(NSString *)originalFilename;
-(unsigned)orientation;
-(BOOL)isLocallyAvailable;
-(BOOL)isCurrent;
-(id)initWithResource:(id)arg1 asset:(id)arg2 hasAdjustments:(BOOL)arg3 ;
-(id)initWithType:(long long)arg1 livePhoto:(id)arg2 ;
-(id<PLResourceIdentity>)backingResourceIdentity;
-(void)setCplResourceType:(unsigned long long)arg1 ;
-(void)setLocallyAvailable:(BOOL)arg1 ;
-(NSURL *)privateFileURL;
-(void)setPrivateFileURL:(NSURL *)arg1 ;
-(long long)analysisType;
-(id)privateFileLoader;
-(void)setOrientation:(unsigned)arg1 ;
-(long long)pixelWidth;
@end

