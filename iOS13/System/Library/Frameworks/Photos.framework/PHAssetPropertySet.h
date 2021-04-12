/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHAssetPropertySet.h>
@class PHAsset;


@protocol PHAssetPropertySet <PHObjectPropertySet>
@property (nonatomic,__weak,readonly) PHAsset * asset; 
@required
+(id)propertySetName;
-(PHAsset *)asset;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

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
+(id)propertiesToFetch;
+(id)entityName;
+(BOOL)isToMany;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToPrefetch;
-(PHAsset *)asset;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

