/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHAssetPropertySet.h>
@class PHAsset;


@protocol PHAssetPropertySet <PHObjectPropertySet>
@property (nonatomic,__weak,readonly) PHAsset * asset; 
@required
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;
-(PHAsset *)asset;

@end


@class PHAsset, NSString;

@interface PHAssetPropertySet : NSObject <PHAssetPropertySet> {

	PHAsset* _asset;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isToMany;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertiesToPrefetch;
+(id)propertySetName;
+(id)propertiesToFetch;
+(id)keyPathToPrimaryObject;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(PHAsset *)asset;
@end

