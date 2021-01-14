/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSDate;


@protocol PLResource <PLResourceIdentity>
@property (nonatomic,readonly) unsigned orientation; 
@property (nonatomic,readonly) long long unorientedWidth; 
@property (nonatomic,readonly) long long unorientedHeight; 
@property (nonatomic,readonly) long long orientedWidth; 
@property (nonatomic,readonly) long long orientedHeight; 
@property (nonatomic,readonly) float scale; 
@property (nonatomic,copy,readonly) id<PLAssetID> assetID; 
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) id<PLResourceDataStore> dataStore; 
@property (nonatomic,readonly) long long dataStoreSubtype; 
@property (nonatomic,readonly) id<PLResourceDataStoreKey> dataStoreKey; 
@property (nonatomic,readonly) unsigned recipeID; 
@property (nonatomic,readonly) short localAvailability; 
@property (nonatomic,readonly) short localAvailabilityTarget; 
@property (nonatomic,readonly) short remoteAvailability; 
@property (nonatomic,readonly) short remoteAvailabilityTarget; 
@property (nonatomic,readonly) int qualitySortValue; 
@property (nonatomic,readonly) id<PLCodecIdentity> codecID; 
@property (nonatomic,readonly) long long dataLength; 
@property (nonatomic,readonly) long long estimatedDataLength; 
@property (nonatomic,readonly) short trashedState; 
@property (nonatomic,readonly) NSDate * trashedDate; 
@required
-(id<PLResourceDataStore>)dataStore;
-(unsigned long long)cplType;
-(id<PLCodecIdentity>)codecID;
-(NSDate *)trashedDate;
-(int)qualitySortValue;
-(long long)unorientedHeight;
-(long long)orientedWidth;
-(BOOL)isPlayableVideo;
-(long long)unorientedWidth;
-(short)localAvailability;
-(BOOL)isInCloud;
-(BOOL)isDerivative;
-(BOOL)isDefaultOrientation;
-(float)scale;
-(unsigned)recipeID;
-(short)trashedState;
-(long long)dataLength;
-(id<PLAssetID>)assetID;
-(short)remoteAvailability;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(unsigned)orientation;
-(short)remoteAvailabilityTarget;
-(long long)estimatedDataLength;
-(float)scaleGivenAssetHasAdjustments:(BOOL)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3;
-(short)localAvailabilityTarget;
-(long long)dataStoreSubtype;
-(long long)orientedHeight;

@end

