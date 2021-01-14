/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetDestinationAssetCopyProperties : PHAssetPropertySet {

	long long _destinationAssetCopyState;

}

@property (nonatomic,readonly) long long destinationAssetCopyState;              //@synthesize destinationAssetCopyState=_destinationAssetCopyState - In the implementation block
+(id)propertySetName;
+(id)propertiesToFetch;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(long long)destinationAssetCopyState;
@end

