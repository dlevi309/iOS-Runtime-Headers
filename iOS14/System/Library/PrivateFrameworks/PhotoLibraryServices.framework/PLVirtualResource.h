/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLWriteableResource.h>
#import <libobjc.A.dylib/PLValidatesResourceModel.h>

@protocol PLAssetID, PLResourceDataStore, PLResourceDataStoreKey, PLCodecIdentity, PLUniformTypeIdentifierIdentity;
@class NSDate, PLVirtualResourceUniformTypeIdentifierProxy, NSURL, NSString;

@interface PLVirtualResource : NSObject <PLWriteableResource, PLValidatesResourceModel> {

	short _localAvailabilityTarget;
	short _remoteAvailability;
	short _remoteAvailabilityTarget;
	short _trashedState;
	unsigned _version;
	unsigned _resourceType;
	unsigned _recipeID;
	unsigned _orientation;
	int _qualitySortValue;
	float _scale;
	id<PLAssetID> _assetID;
	id<PLResourceDataStore> _dataStore;
	long long _dataStoreSubtype;
	id<PLResourceDataStoreKey> _dataStoreKey;
	long long _unorientedWidth;
	long long _unorientedHeight;
	id<PLCodecIdentity> _codecID;
	id<PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
	NSDate* _trashedDate;

}

@property (nonatomic,readonly) PLVirtualResourceUniformTypeIdentifierProxy * uniformTypeIdentifier; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (assign,nonatomic) unsigned resourceType;                                                              //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) unsigned version;                                                                   //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned recipeID;                                                                  //@synthesize recipeID=_recipeID - In the implementation block
@property (assign,nonatomic) unsigned orientation;                                                               //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) id<PLResourceDataStore> dataStore;                                                  //@synthesize dataStore=_dataStore - In the implementation block
@property (assign,nonatomic) long long dataStoreSubtype;                                                         //@synthesize dataStoreSubtype=_dataStoreSubtype - In the implementation block
@property (nonatomic,retain) id<PLResourceDataStoreKey> dataStoreKey;                                            //@synthesize dataStoreKey=_dataStoreKey - In the implementation block
@property (assign,nonatomic) short remoteAvailability;                                                           //@synthesize remoteAvailability=_remoteAvailability - In the implementation block
@property (assign,nonatomic) float scale;                                                                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long unorientedWidth;                                                          //@synthesize unorientedWidth=_unorientedWidth - In the implementation block
@property (assign,nonatomic) long long unorientedHeight;                                                         //@synthesize unorientedHeight=_unorientedHeight - In the implementation block
@property (assign,nonatomic) int qualitySortValue;                                                               //@synthesize qualitySortValue=_qualitySortValue - In the implementation block
@property (nonatomic,retain) id<PLCodecIdentity> codecID;                                                        //@synthesize codecID=_codecID - In the implementation block
@property (nonatomic,retain) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;                        //@synthesize uniformTypeIdentifierID=_uniformTypeIdentifierID - In the implementation block
@property (nonatomic,readonly) long long orientedWidth; 
@property (nonatomic,readonly) long long orientedHeight; 
@property (nonatomic,copy,readonly) id<PLAssetID> assetID;                                                       //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) short localAvailability; 
@property (nonatomic,readonly) short localAvailabilityTarget;                                                    //@synthesize localAvailabilityTarget=_localAvailabilityTarget - In the implementation block
@property (nonatomic,readonly) short remoteAvailabilityTarget;                                                   //@synthesize remoteAvailabilityTarget=_remoteAvailabilityTarget - In the implementation block
@property (nonatomic,readonly) long long dataLength; 
@property (nonatomic,readonly) long long estimatedDataLength; 
@property (nonatomic,readonly) short trashedState;                                                               //@synthesize trashedState=_trashedState - In the implementation block
@property (nonatomic,readonly) NSDate * trashedDate;                                                             //@synthesize trashedDate=_trashedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PLResourceDataStore>)dataStore;
-(unsigned long long)cplType;
-(id<PLCodecIdentity>)codecID;
-(NSDate *)trashedDate;
-(int)qualitySortValue;
-(long long)unorientedHeight;
-(long long)orientedWidth;
-(void)setUniformTypeIdentifierID:(id<PLUniformTypeIdentifierIdentity>)arg1 ;
-(BOOL)isPlayableVideo;
-(void)setUnorientedHeight:(long long)arg1 ;
-(void)setRecipeID:(unsigned)arg1 ;
-(void)setUnorientedWidth:(long long)arg1 ;
-(void)setResourceType:(unsigned)arg1 ;
-(long long)unorientedWidth;
-(short)localAvailability;
-(BOOL)isInCloud;
-(unsigned)resourceType;
-(void)setDataStoreKey:(id<PLResourceDataStoreKey>)arg1 ;
-(void)setQualitySortValue:(int)arg1 ;
-(BOOL)isDerivative;
-(BOOL)isDefaultOrientation;
-(void)setCodecID:(id<PLCodecIdentity>)arg1 ;
-(void)setRemoteAvailability:(short)arg1 ;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(float)scale;
-(unsigned)recipeID;
-(short)trashedState;
-(long long)dataLength;
-(NSString *)debugDescription;
-(id<PLAssetID>)assetID;
-(short)remoteAvailability;
-(PLVirtualResourceUniformTypeIdentifierProxy *)uniformTypeIdentifier;
-(void)setDataStore:(id<PLResourceDataStore>)arg1 ;
-(NSURL *)fileURL;
-(id)singleLineDescription;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(void)setDataStoreSubtype:(long long)arg1 ;
-(id)initWithRecipe:(id)arg1 forAsset:(id)arg2 ;
-(void)setScale:(float)arg1 ;
-(unsigned)orientation;
-(short)remoteAvailabilityTarget;
-(void)setVersion:(unsigned)arg1 ;
-(id)photosCTLJSONDict;
-(id)initWithAsset:(id)arg1 resourceType:(unsigned)arg2 version:(unsigned)arg3 recipeID:(unsigned)arg4 ;
-(long long)estimatedDataLength;
-(float)scaleGivenAssetHasAdjustments:(BOOL)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3 ;
-(short)localAvailabilityTarget;
-(unsigned)version;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(long long)dataStoreSubtype;
-(void)setOrientation:(unsigned)arg1 ;
-(long long)orientedHeight;
@end

