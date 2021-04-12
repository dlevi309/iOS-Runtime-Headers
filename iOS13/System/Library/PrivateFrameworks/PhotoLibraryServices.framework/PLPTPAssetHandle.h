/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSManagedObjectID, NSSet, NSString;

@interface PLPTPAssetHandle : NSObject {

	BOOL _requiresConversion;
	long long _type;
	NSManagedObjectID* _assetID;
	NSManagedObjectID* _sidecarID;
	NSSet* _siblingAssetHandleTypes;

}

@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSManagedObjectID * assetID;                        //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,copy,readonly) NSManagedObjectID * sidecarID;                      //@synthesize sidecarID=_sidecarID - In the implementation block
@property (nonatomic,readonly) BOOL requiresConversion;                                 //@synthesize requiresConversion=_requiresConversion - In the implementation block
@property (nonatomic,readonly) NSString * auxiliaryResourceFilenameMarker; 
@property (nonatomic,copy,readonly) NSSet * siblingAssetHandleTypes;                    //@synthesize siblingAssetHandleTypes=_siblingAssetHandleTypes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)type;
-(NSManagedObjectID *)assetID;
-(NSManagedObjectID *)sidecarID;
-(BOOL)requiresConversion;
-(BOOL)hasSiblingAssetWithAssetHandleType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(BOOL)arg4 ;
-(id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(BOOL)arg4 siblingAssetHandleTypes:(id)arg5 ;
-(id)assetHandleBySettingRequiresConversion;
-(id)assetHandleBySettingSiblingAssetHandleTypes:(id)arg1 ;
-(NSString *)auxiliaryResourceFilenameMarker;
-(NSSet *)siblingAssetHandleTypes;
@end

