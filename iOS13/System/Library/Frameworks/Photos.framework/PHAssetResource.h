/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) id<PLResourceIdentity> backingResourceIdentity;               //@synthesize backingResourceIdentity=_backingResourceIdentity - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * assetObjectID;                            //@synthesize assetObjectID=_assetObjectID - In the implementation block
@property (assign,nonatomic) unsigned orientation;                                           //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) unsigned long long cplResourceType;                             //@synthesize cplResourceType=_cplResourceType - In the implementation block
@property (assign,getter=isLocallyAvailable,nonatomic) BOOL locallyAvailable;                //@synthesize locallyAvailable=_locallyAvailable - In the implementation block
@property (nonatomic,retain) NSURL * privateFileURL;                                         //@synthesize privateFileURL=_privateFileURL - In the implementation block
@property (getter=isCurrent,nonatomic,readonly) BOOL current;                                //@synthesize current=_current - In the implementation block
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
-(id)description;
-(id)debugDescription;
-(long long)type;
-(unsigned long long)fileSize;
-(unsigned)orientation;
-(void)setOrientation:(unsigned)arg1 ;
-(BOOL)isTrashed;
-(NSString *)originalFilename;
-(long long)pixelWidth;
-(long long)pixelHeight;
-(PHPhotoLibrary *)photoLibrary;
-(NSString *)uniformTypeIdentifier;
-(NSDate *)trashedDate;
-(BOOL)isLocallyAvailable;
-(unsigned long long)cplResourceType;
-(id)initWithResource:(id)arg1 asset:(id)arg2 hasAdjustments:(BOOL)arg3 ;
-(id)initWithType:(long long)arg1 livePhoto:(id)arg2 ;
-(NSString *)assetLocalIdentifier;
-(id<PLResourceIdentity>)backingResourceIdentity;
-(NSManagedObjectID *)assetObjectID;
-(void)setCplResourceType:(unsigned long long)arg1 ;
-(void)setLocallyAvailable:(BOOL)arg1 ;
-(NSURL *)privateFileURL;
-(void)setPrivateFileURL:(NSURL *)arg1 ;
-(BOOL)isCurrent;
-(long long)analysisType;
-(id)privateFileLoader;
@end

