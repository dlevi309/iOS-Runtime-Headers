/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(float)scale;
-(unsigned)orientation;
-(id<PLResourceDataStore>)dataStore;
-(long long)dataLength;
-(unsigned long long)cplType;
-(short)trashedState;
-(unsigned)recipeID;
-(short)localAvailability;
-(BOOL)isDerivative;
-(long long)unorientedHeight;
-(long long)unorientedWidth;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(id<PLAssetID>)assetID;
-(NSDate *)trashedDate;
-(short)remoteAvailability;
-(int)qualitySortValue;
-(id<PLCodecIdentity>)codecID;
-(short)localAvailabilityTarget;
-(long long)estimatedDataLength;
-(BOOL)isDefaultOrientation;
-(BOOL)isPlayableVideo;
-(long long)orientedWidth;
-(long long)orientedHeight;
-(long long)dataStoreSubtype;
-(short)remoteAvailabilityTarget;

@end

